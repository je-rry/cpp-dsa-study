#include <iostream>   
#include <cstring>

using namespace std;   

class MyString {
    public :
        MyString(const char *init_str) {
            cout << "MyString(const char *init_str)" << endl;

            // 포인터로 받아오기 때문에 사이즈를 알수가 없어서 계산해준다. 
            size_ = 0;
            while(init_str[size_] != '\0') {
                size_++;
            }

            if(size_ > 0) {
                str_ = new char[size_];
            }

            // 사이즈를 알고있기 때문에 null character 굳이 복사할 필요가 없다
            for(int i=0; i< size_; i++) {
                str_[i] = init_str[i];
            }
            // memcpy(str_, init_str, size_);
        }

        ~MyString() {
            cout << "Destructor" << endl;

            size_ = 0;
            if(str_) {
                delete[] str_;
            }
        }

        void Resize(int new_size) {
            char *new_str = new char[new_size];

            memcpy(new_str, str_, new_size);
            delete[] str_;
            str_ = new_str;
            size_ = new_size;

            // new_str 지우면 안됨!
        }

        void Print() {
            // 왜 하나하나씩 출력하고 있는가? 
            // 마지막에 널 캐릭터가 항상 들어가있다는 보장이 없기 때문
            for(int i = 0; i < size_; i++) {
                cout << str_[i];
            }
            cout << endl;
        }

        void Append(MyString *app_str) {
            int old_size = size_;
            
            Resize(size_ + app_str->size_);

            for(int i = old_size; i < size_; i++) {
                str_[i] = app_str->str_[i - old_size];
            }
        }

    private :
        int size_ = 0;
        char *str_ = nullptr;
};

int main() {    
    MyString str1("ABCD");
    MyString str2("123");

    str1.Print();

    str1.Append(&str2);
    str1.Print();

    return 0;
}