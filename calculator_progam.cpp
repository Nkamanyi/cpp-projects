#include <iostream>

using namespace std;

int main(){

    char op;
    double num1;
    double num2;
    double result;

    cout <<"***************************CALCULATOR*********************************"<< endl;

    cout << "Enter an operation (+ - * /): ";
    cin >> op;

    cout << "Enter num1 : ";
    cin >> num1;

    cout << "Enter num2 : ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "Result : " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result : " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result : " << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << "Result : " << result << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }
   

    cout <<"***************************CALCULATOR*********************************"<< endl;

    return 0;
}

