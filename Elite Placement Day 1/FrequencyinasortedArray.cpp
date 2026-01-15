#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n, temp;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    map<int, int> mpp;
    for(int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    return 0;
}