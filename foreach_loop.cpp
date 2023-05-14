#include <iostream>

using namespace std;

// loop that ease the tranversal over an iteratable data set.

int main() {

    string students[] = {"Patrick", "Michael", "Joseph", "John", "Mary"};

    for(string student : students){
        cout << student << endl;
    }

    return 0;
}
