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
    unordered_set<int> st;
    for(int i = 0; i < arr.size(); i++)
    {
        st.insert(arr[i]);
    }
    int count = 0,longest = 1;
    for(auto it : st)
    {
        if(st.find(it-1) == st.end())
        {
            count = 1;
            int x = it;
            while(st.find(x+1) != st.end())
            {
                x += 1;
                count++;
            }
        }
        longest = max(longest,count);
    }
    cout<<longest;
    return 0;
}