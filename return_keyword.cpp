#include <iostream>

using namespace std;

// return is used to return a value back 
// to the spot where you called the encompassing function.

double square(double number){
    return number * number;

}

int main(){

    cout <<square(3) << endl;

    return 0;
}