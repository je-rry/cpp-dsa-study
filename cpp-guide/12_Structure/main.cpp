#include <iostream>   
#include <cstring>

using namespace std;   

struct MyStruct {
    int first;
    int second;
    
    int Sum() {
        return first + second;
    }
};

int main() {    

    // member(.) operator
    MyStruct a;
    a.first = 123;
    a.second = 456;
    cout << sizeof(a) << endl; // sizeof(구조체)는 항상 구조체 내의 멤버변수들의 크기와 같거나 크다. 

    // 포인터는 member(->) operator가 화살표
    MyStruct *ptr_a = &a;
    cout << ptr_a->first << " " << ptr_a->second << endl;

    ptr_a->first = -6;

    // 배열도 가능
    MyStruct pairs[10];
    for(int i = 0; i < 10; i++) {
        pairs[i].first = i;
        pairs[i].second = i * 10;

        // 배열 자체가 포인터이기 때문에 인덱싱 없이 접근하려고 하는 건 주의하자
        // pairs -> first = i;
        // pairs -> second = i * 10;

        cout << pairs[i].Sum() << endl;
    }

    return 0;
}