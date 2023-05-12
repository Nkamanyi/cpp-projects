#include <iostream>

using namespace std;
// ternary operator ?: are replacements to an if/else statement
// condition ? expression1 : expression2;

int main(){
    
    int grade;

    cout << "Enter a grade: ";
    cin >> grade;

    grade >= 60 ? cout << "You pass" : cout << "You fail" << endl;
    


    return 0;
}