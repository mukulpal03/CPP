#include<iostream>
#include<string>
using namespace std;

int main () {
    int choice;
    double price;
    
    cout << "Select your tea \n";
    cout << "1. Green tea\n";
    cout << "2. Lemon tea\n";
    cout << "3. Oolong tea\n";
    cout << "Enter your choice in num: \n";
    cin >> choice;

    switch (choice) {
        case 1:
            price = 2;
            break;
        case 2:
            price = 3;
            break;
        case 3:
            price = 4;
            break;
        default:
            cout << "Invalid Choice";
    }

    cout << "Price for your tea is " << price; 
}