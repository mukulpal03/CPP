#include<iostream>
using namespace std;

// pass by reference / call by reference

int global_chai_stock = 100; // global scope

void pourChai (int &cups) {  // & gives the memory reference
    int test = 9;  // functional scope 
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
}

int main () {
    int chai_cups = 2;
    pourChai(chai_cups);
    cout << "Total cups: " << chai_cups << endl;
    return 0;
}