#include<iostream>
using namespace std;

int main () {
    int tea_cups;

    cout << "Enter the number of tea cups to serve";
    cin >> tea_cups;

    while (tea_cups > 0) {
        tea_cups--;
        cout << "Serving cup of tea \n" << tea_cups << " remaining";
    }

    cout << "All tea cups are served" << endl;
}