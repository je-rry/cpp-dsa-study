#include <iostream>   

using namespace std;   

const int kMaxStr = 100;

int Min(int a, int b) {
    return a < b ? a : b;
}

int main() {    

    // 정적 배열
    char str1[] = "Hello, World!";
    char str2[kMaxStr];

    // str1 = str2; // Error

    memcpy(str2, str1, Min(sizeof(str1), sizeof(str2)));    // sizeof(str1) : str1 배열이 사용하고 있는 메모리의 전체 크기
    cout << str2 << endl;

    // 동적 메모리 사용
    char *dynamic_array = new char[kMaxStr];

    memcpy(dynamic_array, str1, Min(sizeof(str1), kMaxStr));
    cout << dynamic_array << endl;

    cout << size_t(str1) << " " << size_t(str2) << " " << size_t(dynamic_array) << endl;

    delete[] dynamic_array; // 배열 삭제 시 [] 붙여줌 (할당 크기는 운영체제가 이미 알고있음)

    return 0;
}