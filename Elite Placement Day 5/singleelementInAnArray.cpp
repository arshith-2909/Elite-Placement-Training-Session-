// #include<bits/stdc++.h>
// using namespace std;
    
// int main()
// {
//     vector<int> arr;
//     int n, temp;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     cout<<"Enter the array elements : ";
//     for(int i = 0; i < n; i++)
//     {
//         cin>>temp;
//         arr.push_back(temp);
//     }
    
//     for(int i = 0; i < n-1; i++)
//     {
//         if(arr[i] == 0)
//         {
//             int j = i + 1;
//             while(j < arr.size())
//             {
//                 if(arr[j] != 0)
//                     break;
//                 j++;
//             }
//             if(j < arr.size() && arr[j] != 0)
//                 swap(arr[i],arr[j]);
//         }
//     }
//     for(int i = 0; i < n; i++)
//         cout<<arr[i]<<" ";
//     return 0;
// }


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
    int x = 0;
    for(auto it : arr)
    {
        x ^= it;
        cout<<x<<endl;
    }
    return 0;
}