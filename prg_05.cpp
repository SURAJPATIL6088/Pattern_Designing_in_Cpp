#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) // length
    {
        for (int j = 0; j < i; j++)  // for blank spaces
        {
            cout << "  ";
        }

        for (int k = n; k > 0; k--) // printing the stars
        {
            cout << " * ";
        }
        cout << endl;
    }

    for (int i =0; i<n; i++)
    {
        for (int j = n-i-1; j>0; j--)
        {
            cout << "  ";
        }

        for (int k = n; k >0; k--)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}