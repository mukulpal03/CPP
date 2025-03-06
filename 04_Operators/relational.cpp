#include<iostream>
using namespace std;

int main () {
    int cups;

    cout << "Enter the number of cups you want to buy: ";
    cin >> cups;

    if(cups > 20) {
        cout << "You get a gold badge";
    } else if (cups >= 10 && cups <=20) {
        cout << "You get a silver badge";
    } else {
        cout << "no badge";
    }
}