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
    int largest = arr[0], secondLargest = INT_MIN;
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest)
            secondLargest = arr[i];
    }
    cout<<"SecondLargest : "<<secondLargest;
    return 0;
}