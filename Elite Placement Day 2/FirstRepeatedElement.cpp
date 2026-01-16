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
    int firstRepeatedElement = -1;
    for(int i = 0; i < arr.size(); i++)
    {
        if(mpp.find(arr[i]) != mpp.end())
        {
            firstRepeatedElement = arr[i];
            break;
        }
        mpp[arr[i]] = 1;
    }
    cout<<"First repeated element : "<<firstRepeatedElement;
    return 0;
}