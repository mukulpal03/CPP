// Hollow pyramid

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++) {
            if(i == n - 1 || j == 0 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}