#include <iostream>
using namespace std;

int *prepare_chai_orders(int cups)
{                                // pointer, you cant just write *,
    int *orders = new int[cups]; // new keyword dynamic memory allocate karta hai and int pointer m uss moemory ka reference store kar rhe hai

    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    }

    return orders;
}

// int*, doesnt hold the whole array refrence, ye bas wo address hold karta h jaha se array start hora hai

int main()
{
    int cups = 5;
    int *chai_order = prepare_chai_orders(cups);

    for (int i = 0; i < cups; i++)
    {
        cout << chai_order[i];
    }

    delete[] chai_order;  // dynamic memory ko explicitly delete bhi karna padta hai coz cpp khud se nahi karta. and whenever u use a new keyword, you will always use a delete keyword too.

    return 0;
}