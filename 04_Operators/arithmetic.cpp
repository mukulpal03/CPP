#include<iostream>
using namespace std;

int main () {
    int cups;
    double price_per_cup, total_price, discounted_price;

    cout << "Enter the number of tea cups: ";
    cin >> cups;
    cout << "Enter the price per cup: ";
    cin >> price_per_cup;

    total_price = cups * price_per_cup;

    // apply 5% discount if total price is above 100

    if(total_price > 100) {
        discounted_price = total_price - ((total_price * 5) / 100);
        cout << "Discounted price is: " << discounted_price << endl;
    } else {
        cout << "Total price is: " << total_price << endl;
    }
}