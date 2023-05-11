#include <iostream>
#include <vector>

using namespace std;


// typedef 
// reserved keyword used to create an additional name
// (alias) for another data type.
// New ideentifier for an existing type.
// Helps with readability and reduces typos.

typedef std::string string;
using string = std::string;

int main(){

    string s1 = "Hello";
    string s2 = "World";   
 
    cout << s1 << " " << s2 << endl;
    cout << s1.size() << " " << s2.size() << endl;
  

    return 0;

}