#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    char output = ' ';
    string s;
    cout<<"Enter the size of the string : ";
    cin>>n;
    cout<<"Enter the string : ";
    cin>>s;
    reverse(s.begin(), s.end());
    unordered_map<char,int> mpp;
    for(int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second == 1)
        {
            output = it.first;
            break;
        }
    }
    cout<<output;
    return 0;
}