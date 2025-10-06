#include <iostream>   

using namespace std;   

// 포인터로 매개변수를 받아오기 때문에 문자열의 길이를 알 방법이 없음
// sizeof(str1) 하면 포인터 크기인 8바이트만 나옴
const int kMaxStr = 100;

// 문자열 매개변수로 
// 문자열의 길이가 동일하다고 가정
bool IsEqual(const char *str1, const char *str2) {
    // cout << "check!!! " << sizeof(str1) << " " << sizeof(str2) << endl;

    for(int i = 0; i < kMaxStr; i++) {
        cout << int(str1[i]) << " " << int(str2[i]) << endl;

        if(str1[i] != str2[i]) return false;

        if(str1[i] == '\0') return true;
    }

    return true; 
}

int main() {    

    const char str1[kMaxStr] = "stop";

    while(1) {
        char str2[kMaxStr];
        cin >> str2;

        if(IsEqual(str1, str2)) {
            cout << "종료합니다" << endl;
            break;
        } else 
            cout << "계속하세요" << endl;
    }

    return 0;
}