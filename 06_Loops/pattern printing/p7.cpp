// Hollow Inverted Half pyramid

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (i == 0 || j == (n - i) - 1 || j == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}