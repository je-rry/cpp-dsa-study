#include <iostream>   

using namespace std;   

int main() {    
    // 같은 자료형의 데이터를 저장하기 위해 메모리를 미리 잡아놓은 것
    int arr[5] = {1, 2, 3, 4, 5};   // 배열 선언 및 초기화

    cout << arr[0] << " ";   // 1
    cout << arr[1] << endl;   // 2

    // 문자열은 기본적으로 문자의 배열
    char name[14] = "Hello, World!";  // 문자 ''와 문자열 "" 구분

    // 글자수는 13자이나, 배열의 크기는 14인 이유?
    // 문자열의 끝을 알리는 null 문자('\0')가 자동으로 추가되기 때문
    cout << sizeof(name) << endl;   // 14


    name[2] = '\0';
    cout << name << endl;   // Hello, World! -> He
    // cout은 null 문자를 만나면 출력을 멈춤

    char word[] = "Hello"; // 초기화 할때는 대괄호 값 숨길 수 있음

    return 0;
}

