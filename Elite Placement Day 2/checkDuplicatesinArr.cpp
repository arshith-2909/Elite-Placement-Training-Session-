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
    int ans, count;
    for(auto it:mpp)
    {
        if(it.second > 1)
        {
            ans = it.first;
            count = it.second;
        }
    }
    cout<<"Dupicate element :"<<ans<<endl;
    cout<<"Count of Duplicate elements :"<<count;
    return 0;
}