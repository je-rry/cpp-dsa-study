#include <iostream>   

using namespace std;   

int main() {    
    
//    int arr[] = {1,2,3,4,5,4,3,2,1};
//    cout << sizeof(arr) << endl; // 전체 배열의 크기
//    cout << sizeof(int) << endl; // 자료형의 크기
//    for(int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//         cout << arr[i] << " ";
//    }

//    cout << endl;

   // 문자열 출력
   char str[] = "Hello\0, World!";

//    for(int i = 0; i < sizeof(str); i++) {
//         if(str[i] == '\0') break;
//         cout << str[i] << endl;
//    }

//    for(int i = 0; str[i] != '\0'; i++) {
//         cout << str[i] << endl;
//    }

    // while문
    // int i = 0;
    // while(true) {   // for(;true;)
    //     if(++i > 9) break; 
    //     cout << i << " ";
    // }
    // cout << endl;

    int i = 0;
    while(i < sizeof(str) && str[i] != '\0') {
        cout << str[i];
        i++;
    }

    return 0;
}

