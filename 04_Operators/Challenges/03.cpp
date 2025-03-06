#include<iostream>
#include<string>
using namespace std;

int main () {
    int cups;

    cout << "Enter the number of cups you bought: " << endl;
    cin >> cups;
    bool is_member_for_atleast_an_year, qualifies_for_discount;

    if(is_member_for_atleast_an_year || cups > 12) {
        qualifies_for_discount = true;
    } else {
        qualifies_for_discount = false;
    }
}