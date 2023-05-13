#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));

    int randomNumber = rand() % 5 + 1;

    switch(randomNumber){
        case 1:
            cout << "Great you came out first in your class :)" << endl;
            break;
        case 2:
            cout << "Great you did well" << endl;
            break;
        case 3:
            cout << "Good you took the third position in your class" << endl;
            break;
        case 4:
            cout << "Good but you can do better" << endl;
            break;
        case 5:
            cout << "Good but I encourage you to work harder next time" << endl;
            break;
    }


    return 0;
}