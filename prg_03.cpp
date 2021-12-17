#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size : " << endl;
    cin >> n;

    char c = 'A';

    for( int i=0; i<=n; i++)
    {
        for(int j=i; j>0; j--)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}