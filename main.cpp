#include <iostream>

using namespace std;

int main()
{
    

    string name,surname,patronymic,group;

    cout <<"Insert your name:";
    cin >> name;
    cout <<"Insert your surname:";
    cin >> surname;
    cout <<"Insert your patronymic:";
    cin >> patronymic;
    cout <<"Insert your group Name:";
    cin >> group;


    int length = 31;
    int length_second =  19 + group.length();
    int length_third = 6 + name.length() + surname.length() + patronymic.length() ;
    if ( length_second >= length_third && length_second > 31 )
            length = length_second;
        else
            if (length_third > 31)
            length = length_third;




    cout << "\n\t\t\t";
    for(int i = 0;i < length;++i){
        cout << "*";
    }
    cout << "\n\t\t\t* Laboratory work №1";
    for(int i = 0;i < length - 21;++i){
        cout << " ";
    }
    cout << "*\n\t\t\t* Make by group: " << group << " ";

    for(int i = 0;i < length - length_second;++i){
        cout << " ";
    }
    cout  << "*\n\t\t\t* " << surname << " " << name << " " << patronymic;

    for (int i = 0; i <= (length - length_third); i++ ){
            cout << " ";
    }
    cout << "*\n\t\t\t";
    for(int i = 0;i < length;++i){
        cout << "*";
    }

    return 0;
}
