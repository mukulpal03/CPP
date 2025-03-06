#include<iostream>
using namespace std;

int main () {
    int tea_bags;

    cout << "Enter the tea bags you have: ";
    cin >> tea_bags;

    if(tea_bags < 10) {
        tea_bags += 5;
    }

    cout << tea_bags;
}