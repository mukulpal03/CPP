#include<iostream>
#include<string>
using namespace std;

int main () {
    int tea_bags;

    cout << "Enter the number of tea bags you have: " << endl;
    cin >> tea_bags;
    
    if(tea_bags < 20) {
        tea_bags += 10;
    }

    cout << "Your final tea bags are: " << tea_bags;
}