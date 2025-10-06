#include <iostream>   

using namespace std;   

int main() {    

    int a = 123;   // 4바이트

    // sizeof() : 자료형의 크기(바이트 단위)를 반환하는 연산자
    cout << sizeof(int) << endl;    // 4

    // 부동소수점 자료형
    float f = 123.456f;   // 4바이트
    double d = 123.456;   // 8바이트
    long double ld = 123.456L; // 16바이트
    
    cout << sizeof(f) << endl;    // 4
    cout << sizeof(d) << endl;    // 8
    cout << sizeof(ld) << endl;   // 16

    // 문자 자료형
    char c = 'A';   // 1바이트
    char str[] = "Hello, World!"; // std::string

    cout << sizeof(c) << endl;    // 1 

    
    // 형변환
    int i = 987.654;   // 묵시적 형변환 (implicit conversion) double을 int로 
    cout << i << endl;   // 987 (소수점 이하 버림)

    float f2 = 567.89; // f가 없음 따라서 형변환


    // 불리언
    bool b = false;   // 1바이트 (0: false, 0이외의 값: true)
    cout << sizeof(b) << endl;    // 0

    // 연산자
    // insertion 연산자 (<<) 가 논리연산자보다 우선순위가 더 높다.
    cout << (true && false) << endl;   // 0

    // 영역 (scope)
    {
        int a = 1000;   // 지역변수 (local variable)
        cout << a << endl;   // 1000
    }
    cout << a << endl;   // 123 (전역변수 global variable)


    return 0;
}

