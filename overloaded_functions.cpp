#include <iostream>

using namespace std;

// overloaded functions -- functions can share the name but they need a different set of parameters.
// a function's name and its parameters is known as a function's signature and they nned to be unique.

void bakepizza(){
    cout << "I love to Bake pizza!" << endl;
}

void bakepizza(string name1){
    cout << "I love to Bake pizza with " << name1 << "." << endl;
}

void bakepizza(string name1, string name2){
    cout << "I love to Bake pizza with " << name1 << " and " << name2 << "." << endl;

}

int main(){
    bakepizza("mushroom", "pepperoni");

    return 0;
}