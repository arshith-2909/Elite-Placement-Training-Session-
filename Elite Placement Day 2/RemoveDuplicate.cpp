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
    reverse(arr.begin(), arr.end());
    unordered_set<int> st;
    for(int i = 0; i < arr.size(); i++)
    {
        st.insert(arr[i]);
    }
    for(auto it : st)
    {
        cout<< it<< " ";
    }
    return 0;
}