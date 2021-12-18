#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size : " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k <= (n-i); k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout << j << " ";
        }

        for (int j = 65; j <= (63 + i); j++)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
    return 0;
}