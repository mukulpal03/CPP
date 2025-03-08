#include<iostream>
using namespace std;

int main () {
    string tea_types[3] = {"Green Tea", "Black Tea", "Lemon Tea"};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Brewing" << j << " cup of " << tea_types[i] << endl;
        }
    }
}