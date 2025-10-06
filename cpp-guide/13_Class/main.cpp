#include <iostream>   
#include <cstring>

using namespace std;   

class MyClass {
    public:
        // 생성자
        MyClass() {
            cout << "MyClass()" << endl;
        }

        MyClass(int number) {
            cout << "MyClass(int number)" << endl;
            
            // this pointer
            // this -> number_ = number;
            number_ = number;
        }

        // 소멸자
        ~MyClass() {
            cout << "~MyClass()" << endl;
        }

        void Increment(int a) {
            number_ += a;
        }

        void Print() {
            cout << number_ << endl;
        }

    private :
        int number_ = 0; // _는 구글 스타일 (보통 m_number 하는 경우 있음)
};

int main() {    
    
    MyClass my_class1;
    MyClass my_class2(123);

    my_class1.Print();
    my_class2.Print();

    my_class1.Increment(1);
    my_class1.Print();

    // 클래스 = 커스텀 자료형이라고 이해해도 됨
    // 배열로도 사용 가능
    // 포인터도 사용 가능

    return 0;
}