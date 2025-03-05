#include<iostream>
#include<string>
using namespace std;

int main () {
    string user_tea;
    int tea_quantity;

    cout << "What would you like to order" << endl;
    getline(cin, user_tea);

    cout << "how many cups of " << user_tea << "would you like to have";
    cin >> tea_quantity;
    
    return 0;
}