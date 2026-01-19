#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input = "PROGRAM";
    vector<vector<char>> ans;
    int a = 0, b = 0;
    for(int i = 0; i < input.size(); i++)
    {
        for(int j = 0; j < input.size(); j++)
        {
            if(j == 2)
            {
                ans[i][j] = input[a];
                a++;
            }
            if(i == 2)
            {
                if(i != j)
                    ans[i][j] = input[b];
                b++;
            }
            else if(j != 2 || i != 2)
            {
                ans[i][j] = ' ';
            }
        }
    }
    for(int i = 0; i < input.size(); i++)
    {
        for(int j = 0; j < input.size(); j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}