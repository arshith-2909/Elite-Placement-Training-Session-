#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    for(int i = 2; i < n+1; i++)
    {
        arr.push_back(arr[i-1] + arr[i-2]);
    }
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
}