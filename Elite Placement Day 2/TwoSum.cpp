#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n, temp, target;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Enter the target : ";
    cin>>target;
    map<int, int> mpp;
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++)
    {
        int more = target - arr[i];
        if(mpp.find(more) != mpp.end())
        {
            ans.push_back(mpp[more]);
            ans.push_back(i);
        }
        mpp[arr[i]] = i;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}