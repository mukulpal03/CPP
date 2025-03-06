#include<iostream>
using namespace std;

int main () {
    bool is_student;
    int cups;

    cout << "Are you a student?";
    cin >> is_student;
    cout << "how many cups have you purchased";
    cin >> cups;

    if(is_student || cups > 15) {
        cout << "Eligible";
    } else {
        cout << "not eligible";
    }
}