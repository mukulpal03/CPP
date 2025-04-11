#include <iostream>
using namespace std;

int total_chai_served(int chai[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chai[i];
    }
    return total;
}

int main()
{
    int chai_served[5] = {50, 60, 70, 80, 90};
    int total = total_chai_served(chai_served, 5);
    cout << total;

    return 0;
}