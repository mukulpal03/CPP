#include<iostream>
#include<string>
using namespace std;

int main () {
    int tea_packs;
    double price_per_pack, total_price, final_price;

    cout << "Enter the number of tea packs you want: " << endl;
    cin >> tea_packs;
    cout << "Enter the price per pack" << endl;
    cin >> price_per_pack;

    total_price = tea_packs * price_per_pack;
    final_price = total_price + ((total_price * 10) / 100);

    cout << "Your final price is: " << final_price;
}