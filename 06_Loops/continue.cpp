#include<iostream>
#include<string>
using namespace std;

int main () {
    string tea_types[3] = {"Green Tea", "Black Tea", "Lemon Tea"};
    
    for(int i = 0; i < 3; i++) {
        if(tea_types[i] == "Green Tea") {
            continue;
        }

        cout << "Brewing " << tea_types[i] << "..." << endl;
    }
}