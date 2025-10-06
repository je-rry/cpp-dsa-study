#include <iostream>   

using namespace std;   

int main() {    
    
    int number;
    cin >> number;

    if(number % 2 == 0) {
        cout << "'짝수입니다\n";    // cout << "짝수입니다." << endl;
    } else {
        cout << "홀수입니다\n";
    }

    switch(number) {
        case 0:
            cout << "0입니다.\n";
            break;
        default :
            cout << "그 외 숫자입니다." << endl;
            break;  // 마지막은 생략 가능
    }

    return 0;
}

