#include <iostream>   

using namespace std;   

int main() {    
    
    char user_input[100];

    cout << "문장 입력" << endl;
    cout << "입력 : ";
   
    // cin은 데이터를 흘려넣어서 보내는 스트램 
    // 자료형에 따라서 알아서 처리해준다. scanf() 보다 편리하다
    // 중간에 빈칸, 줄바꿈이 있으면 더이상 가져오지 않는다. 
    cin >> user_input;

    // 줄바꿈 되기 전까지만 갖고 오고 싶다면 (공백 포함)
    // cin.getline(user_input, sizeof(user_input));

    cout << "결과 : " << user_input << endl;

    int number = -1;
    int number2 = -1;

    cin >> number >> number2;
    cout << number << " " << number2 << endl;

    // 최대 100글자까지 입력 받아서 무시하겠다, 또는 \n이 있으면 그때부터 무시하겠다는 의미
    cin.ignore(100, '\n');

    cin.ignore(numeric_limits<streamsize>::max(), '\n');    // 스트림 사이즈의 최대치를 다 무시하겠다는 의미



    // char name1[100];
    // char name2[100];

    // cout << "첫번째 : ";
    // cin >> name1;
    // cin.ignore(5);

    // cout << "두번째 : ";
    // cin >> name2;
    // cout << endl;

    // cout << "name1 : " << name1 << endl;
    // cout << "name2 : " << name2 << endl;

    // cin.getline(name2, sizeof(name2));
    // cout << name2;

    return 0;
}

