#include <iostream>
using namespace std;

int main()
{
    int chai_sales[3][5] = {
        {10, 20, 30, 40, 50},
        {60, 70, 80, 90, 100},
        {110, 120, 130, 140, 150}
    };

    // rows and cols
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            cout << chai_sales[i][j];
        }
    }

    return 0;
}