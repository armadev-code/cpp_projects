#include <iostream>


using namespace std;

int main()
{
    float number1, number2, result;
    char operation;
    number1 = 0;
    number2 = 0;
    result = 0;
    operation = ' ';

    cout << "1. Sayiyi giriniz: ";
    cin >> number1;
    cout << "Islemi seciniz (+,-,*,/): ";
    cin >> operation;
    cout << "2. Sayiyi giriniz: ";
    cin >> number2;
    


    switch (operation) {
    case '+':
        result = number1 + number2;
        cout << "Islemin sonucu: " << result << endl;
        break;

    case '-':
        result = number1 - number2;
        cout << "Islemin sonucu: " << result << endl;
        break;
    case '*':
        result = number1 * number2;
        cout << "Islemin sonucu: " << result << endl;
        break;
    case '/':
        if (number2 == 0) {
            cout << "Islem Tanimsizdir"<<endl;
            break;
        }
        else {
            result = number1 / number2;
            cout << "Islemin sonucu" << result << endl;
            break;
        }
    default:
        cout << "Islem hatasi ile karsilasildi";
        break;
    }
}