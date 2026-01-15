#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}
void reverse(vector<int>& arr, int i, int j)
{
    while(i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    vector<int> arr;
    int d, n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the number of rotations to be performed : ";
    cin>>d;
    int temp;
    cout<<"Enter the array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    reverse(arr, 0, d-1);
    reverse(arr, d, arr.size()-1);
    reverse(arr, 0, arr.size()-1);
    // reverse(arr.begin(),arr.begin()+d);
    // reverse(arr.begin()+d, arr.end());
    // reverse(arr.begin(), arr.end());
    print(arr);
    return 0;
}