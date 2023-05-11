#include <iostream>

using namespace std;

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){

    string name;
    int age;


    cout << "Enter your full name: ";
    getline(cin >> ws, name);

    cout << "Enter your age: ";
    cin >> age;

    // version 2
    // for cin before getline function, use getline(cin >> ws, name) 

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your full name: ";
    getline(cin >> ws, name);


    cout << "Hello "<< name << endl;
    cout << "your are "<<age << " years old."<< endl;

    return 0;
    
}