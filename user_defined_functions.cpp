#include <iostream>

using namespace std;
// A function is a block of reusable code.

void happyBirthday(string name, int age){
    cout << "Happy Birthday " << name << endl;
    cout <<"You are " << age << " years old." << endl;
}


int main(){
     
     happyBirthday("John", 20);

    return 0;
}