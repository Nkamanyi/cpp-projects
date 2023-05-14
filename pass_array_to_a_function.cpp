#include <iostream>

using namespace std;

double calTotal(double prices[], int size){

    double total = 0.0;
    for (int i = 0; i < size ; i++){
        total += prices[i];
    }
    return total;
}

int main() {

    double prices[] = { 49.99, 15.25, 5.99, 10.00, 20.00, 30.0};

    int size = sizeof(prices) / sizeof(prices[0]);

    cout << "Total: " << calTotal(prices, size) << endl;

    return 0;
}