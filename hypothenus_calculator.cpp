#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a;
    double b;
    double c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Hypotenuse: " << c << endl;

    return 0;
}