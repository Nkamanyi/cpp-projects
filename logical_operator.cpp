#include <iostream>

using namespace std;
// && check if two conditions are true
// || check if at least one of the conditions is true
// ! reverses the logical state of its operand

int main(){

    int temp;

    cout << "Enter the temperature: ";
    cin >> temp;

    if(temp >= 0 && temp <= 30){
        cout << "Temperature is good" << endl;
    }
    else if(temp >= 30 && temp <= 60){
        cout << "Temperature is too hot" << endl;
    }
    else if(temp < 0 || temp > 60){
        cout << "Temperature is bad" << endl;
    }


    return 0;
}