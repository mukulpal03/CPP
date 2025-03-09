#include<iostream>
using namespace std;

// lambda functions - usually used in frameworks and libraries

// when we want to use a function just once in a program, we can declare it as a lambda function

int main () {
    auto prepared_chai = [](int cups) {  // auto - when we dont know return type kya hoga
        cout << "Preparing " << cups << endl;
    };

    prepared_chai(5);

    return 0;
}