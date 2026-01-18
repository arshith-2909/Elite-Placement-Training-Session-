#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a = 0, b = 1, c;
    if(n <= 1)
    {
        if(n == 0)
        {
            cout<<a;
            return 0;
        }
        if(n == 1)
        {
            cout << b;
            return 0;
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout<<c;
    return 0;
}