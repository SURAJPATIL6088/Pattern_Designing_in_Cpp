#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size : " << endl;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    for (int i =1; i < n; i++)
    {
        for (int k = i; k>0; k--)
        {
            cout << " ";
        }
        for (int j = n-i; j >0; j--)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}