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

    return 0;
}