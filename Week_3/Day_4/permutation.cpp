#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int  n;     
        cin >> n;
        int grid[n][n-1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin >> grid[i][j];
            }
        }

        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            mp[grid[i][0]]++;
        }
        vector<int> ans;
        int fst,k=INT_MIN;
        for(auto x: mp)
        {
            if(k<x.second)
            {
                fst=x.first;
                k=x.second;
            }
        }
        ans.push_back(fst);
        for(int i=0; i<n; i++)
        {
            if(grid[i][0]!=fst)
            {
                for(int j=0; j<n-1; j++)
                {
                    ans.push_back(grid[i][j]);
                }
            }
        }

        for(int x: ans)
        {
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}