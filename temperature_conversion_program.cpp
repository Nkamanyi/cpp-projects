#include <iostream>

using namespace std;

int main(){

    double temp;
    char unit;

    cout << "*****************Temperature Conversion*****************"<<endl;

    cout << "C = Celsius" <<endl;
    cout << "F = Fahrenheit" <<endl;
    
    cout << "What temperature would you like to convert to?: ";
    cin >> unit;
    

    if (unit == 'C' || unit == 'c'){
        cout << "Enter temperature in Fahrenheit? ";
        cin >> temp;
        cout << "Temperature: " << (temp - 32.0) / 1.8 << " degrees Celsius" << endl;
    }
    else if (unit == 'F' || unit == 'f'){
        cout << "Enter temperature in Celsius? ";
        cin >> temp;
        cout << "Temperature: " << (temp * 1.8) + 32.0 << " degrees Fahrenheit" << endl;
    }
    else{
        cout << "Invalid input: please enter C or F." << endl;
    }

    cout << "*****************************************************************"<<endl;
    return 0;
}