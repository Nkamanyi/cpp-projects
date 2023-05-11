#include <iostream>
using namespace std;

// Namespace
// provides a solution for preventing name conflicts
// in large C++ projects. Each entity has a unique name.
// a namespace allows for identically named entities
// to be used in different parts of the code.

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main(){
    
    cout << first::x << endl;
    cout << second::x << endl;

    return 0;

}