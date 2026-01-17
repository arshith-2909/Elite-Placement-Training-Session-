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
    cout<<"Enter the target sum : ";
    cin>>target;
    int i = 0, j = 0, maxLen = 0, sum = 0, len = 0;
    while(j < n)
    {
        sum += arr[j];
        while(sum > target)
        {
            sum -= arr[i];
            i++;
        }
        len = j - i + 1;
        if(sum == target)
            maxLen = max(maxLen, len);
        
        j++;
    }
    cout<<maxLen;
    return 0;
}