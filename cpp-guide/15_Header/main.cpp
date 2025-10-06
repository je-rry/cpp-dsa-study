#include <iostream>   
#include "MyClass.h"

using namespace std;   

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