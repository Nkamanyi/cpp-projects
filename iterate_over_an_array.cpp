#include <iostream>

using namespace std;


int main() {

    string students[] = {"Patrick", "Michael", "Joseph", "Michael"};

    for(int i = 0; i < sizeof(students); i++) {
        cout << students[i] << endl;
    }
    
    return 0;
}