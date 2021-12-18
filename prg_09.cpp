#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size : " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= (n - i); j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = (n - i); k > 0; k--)
        {
            cout << " " << k;
        }
        cout << endl;
    }

    return 0;
}