#include <iostream>   
#include <string>

#include "PhoneBook.h"

using namespace std;   

int main() {    
   
    PhoneBook my_phonebook;

    my_phonebook.AddContact("아이언맨", "1234-1234");
    my_phonebook.AddContact("블랙위도우", "2345-2345");
    my_phonebook.AddContact("토르", "4534-64564");
    
    int menu_number;

    bool flag = true;
    while(flag) {
        cout << "1: print all\n";
        cout << "2: search\n";
        cout << "3: add\n";
        cout << "4: delete\n";
        cout << "X: end\n";
        cout << "choose menu : ";

        cin >> menu_number;
        cin.ignore(); // buffer clear

        switch(menu_number) {
            case 1:
                my_phonebook.PrintAll();
                break;
            case 2: 
                my_phonebook.FindByName();
                break;
            case 3:
                my_phonebook.AddContact();
                break;
            case 4:
                my_phonebook.DeleteByName();
            default:
                cout << "종료합니다." << endl;
                flag = false;
                break;
        }
    }

    return 0;
}