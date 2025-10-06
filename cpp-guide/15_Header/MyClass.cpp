#include "MyClass.h" // 선언 헤더 꼭 include 해야함

#include <iostream>   

using namespace std;

// 생성자
MyClass::MyClass() {
    cout << "MyClass()" << endl;
}

MyClass::MyClass(int number) {
    cout << "MyClass(int number)" << endl;
    
    // this pointer
    // this -> number_ = number;
    number_ = number;
}

// 소멸자
MyClass::~MyClass() {
    cout << "~MyClass()" << endl;
}

void MyClass::Increment(int a) {
    number_ += a;
}

void MyClass::Print() {
    cout << number_ << endl;
}