#include <iostream>   

using namespace std;   

int main() {    
    int a = 123;

    // address of 주소 연산자 
    cout << &a << endl;

    // 파이썬에서는 id()로 주소값을 가져온다.

    // 주소값을 넣으려면 * 사용
    int *b = &a;    // *b : 포인터 변수
    cout << b << " " << *b << endl;     // *b : 역참조 연산자

    *b = 567;   // 역참조 연산자 : b가 가리키고 있는 주소로 가서 값을 저장한다.
    cout << a << " " << b << " " << *b << endl;


    double *c = nullptr;    // 또는 0(NULL), 아무 주소도 가리키고 있지 않다는 의미의 초기화

    // 포인터 자체의 주소 크기는 항상 동일하다 
    cout << sizeof(int) << " " << sizeof(double) << endl;
    cout << sizeof(int *) << " " << sizeof(double *) << endl;
    cout << sizeof(b) << " " << sizeof(c) << endl;

    // size_t (주소를 10진수로 변환가능하게 함)
    cout << size_t(b) << " " << size_t(b+1) << endl;

    // 배열의 변수명은 포인터 (0번째 인덱스의 시작 주소를 가리킴)
    char str[] = {'h', 'e', 'l', 'l', 'o'};
    char *ptr = str;
    cout << *(ptr + 2) << endl;

    return 0;
}

