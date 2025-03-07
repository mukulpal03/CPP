#include<iostream>
using namespace std;

int main () {
    int cups;
    double price_per_cup = 2.5, total_price, discount;

    cout << "Enter the number of tea cups you ordered ";
    cin >> cups;

    total_price = price_per_cup * cups;

    if(cups > 20) {
        discount = 0.20;
    } else if (cups >= 10 && cups <= 20) {
        discount = 0.10;
    } else {
        discount = 0;
    }

    total_price -= (total_price * discount);

    cout << "Total price after discount is: " << total_price << endl;
}