#include<iostream>
using namespace std;

// pass by value / call by value

void pourChai (int cups) {
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
}

int main () {
    int chai_cups = 2;
    pourChai(chai_cups);
    cout << "Total cups: " << chai_cups << endl;
    return 0;
}