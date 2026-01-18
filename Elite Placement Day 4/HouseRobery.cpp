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
    int evenSum = arr[0], oddSum = arr[1];
    for(int i = 2; i < arr.size(); i++)
    {
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    int maxProfit = max(evenSum, oddSum);
    cout<<maxProfit;
    return 0;
}