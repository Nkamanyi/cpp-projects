#include <iostream>

using namespace std;

// array is a data structure that stores multiple values
// values are access by indexing.

/*
int main (){

    string cars[] = {"Corvette", "Mustang", "Camry"};

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;

    return 0;
}
*/

int main (){

    string cars[3]; 
    
    cars[0] = "Corvette";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;

    return 0;
}