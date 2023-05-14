#include <iostream>

using namespace std;

// Local variables are declaredinside a function or block {}.
// Global variables are declared outside of all functions or blocks.

int mynum = 10;

void print_mynum(){
    int mynum = 20;
    cout << mynum << endl;
}