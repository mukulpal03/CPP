#include<iostream>
#include<string>
using namespace std;

int main () {
    string tea_order;

    cout << "Enter your tea order" << endl;
    cin >> tea_order;
    
    if(tea_order == "Green tea") {
        cout << "Order Confirmed" << endl;
    }
}