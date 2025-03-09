// syntax

// returnType functionName (parameter) {
      // body
// }

// void -> empty

#include<iostream>
using namespace std;

int checkTemp (int temperature) {  // function definition
    return temperature;
}

// function declaration
void serveChai (int cups);

void makeChai () {
    cout << "making chai...";
}

void serveChai (string tea_type = "Masala tea") { // default parameter  // same name ke bhi function ho sakte h, this is known as function overloading
    cout << "Serving" << tea_type;
}

int main () {
    int temp = checkTemp(35);  // function call
    cout << temp;
    makeChai();
    serveChai(3);
    serveChai();
    return 0;
}

// definition kabhi bhi de sakte hai

void serveChai (int cups) {
    cout << "Serving " << cups << " cups of chai";
}