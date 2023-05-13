#include <iostream>
#include <ctime>

using namespace std;

// In this program, a person tries to guess the number generated by the system.

int main(){

    srand(time(NULL));
    int randNumber = rand() % 5 + 1;

    int tries = 0;
    int guessNumber;

    do{
        cout << "Please enter a guess number from 1 to 5: ";
        cin >> guessNumber;
        tries++;

        if(guessNumber == randNumber){
            cout << "Congrats, you guessed it correctly after " << tries << " tries." << endl;
        }
        else{
            cout << "You guessed it incorrectly!" << endl;
        }


    }while (guessNumber!= randNumber);
    

    return 0;
}