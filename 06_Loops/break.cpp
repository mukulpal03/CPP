#include<iostream>
#include<string>
using namespace std;

int main () {
    string response;

    while(true) {
        cout << "If you want to stop serving tea (type 'stop')";
        cin >> response;

        if(response == "stop") {
            break;
        }

        cout << "Serving cup of tea";
    }

    cout << "No more tea will be served";
}