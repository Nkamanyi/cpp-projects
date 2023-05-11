#include <iostream>

using namespace std;

// type conversion is conversion of a value of any type to another type
// the type of the value must be convertible to the type of the target
// the value must be assignable to the target type
// the value must be copy constructible
// Implicit = automatic conversion
// Explicit = explicit conversion



int main(){

    //int x = 3.14;
    //double x = 3.14;

    //double x = 3.14;
    //double x = (int) 3.14;

    int correct = 8;
    int questions = 10;
    double score = correct/(double) questions * 100;


    cout << "score: " << score << "%" << endl;
    //cout << x << endl;

    return 0;
}