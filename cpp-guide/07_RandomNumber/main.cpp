#include <iostream>   
#include <random>

using namespace std;   

int main() {    
    // 난수 생성
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1,99);

    int number = distrib(gen);

    int numInput = 0;
    while(1) {
        cout << "입력 : ";
        cin >> numInput;

        if(numInput > number) {
            cout << "너무 커요" << endl;
        } else if(numInput < number) {
            cout << "너무 작아요" << endl;
        } else {
            cout << "정답!" << endl;
            break;
        }
    }

    return 0;
}

