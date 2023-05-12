#include <iostream>

using namespace std;

/*
int main(){

    string name;

    cout << "Enter your full name: ";
    getline(cin, name);

    if(name.length() > 12){
        cout << "Your full name is too long!" << endl;

    }
    else{
        cout << "Welcome " << name << endl;
    }

    return 0;
}
*/
/*
int main(){

    string name;

    cout << "Enter your full name: ";
    getline(cin, name);

    if(name.empty()){
        cout << "You didn't enter your name." << endl;

    }
    else{
        cout << "Welcome " << name << endl;
    }

    return 0;
}
*/
/*
int main(){

    string name;

    cout << "Enter your full name: ";
    getline(cin, name);

    name.clear();
    
    cout << "Welcome " << name << endl;

    return 0;
}
*/

/*
int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    name.append("@gmail.com");
    
    cout << "Your email address is now: " << name << endl;

    return 0;
}
*/

/*
int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "The character is " << name.at(0) << endl;

    return 0;
}
*/

int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    name.insert(0, "@");
    
    cout << name << endl;

    return 0;
}