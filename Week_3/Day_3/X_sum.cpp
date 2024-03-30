#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int grid[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> grid[i][j];
            }
        }
        ll mxSum = INT_MIN;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ll chanSum=grid[i][j];
                int l=i-1,r=j-1;
                while(l>=0 && r>=0)
                {
                    chanSum+=grid[l][r];
                    l--;
                    r--;
                }

                l=i-1;r=j+1;
                while(l>=0 && r<m)
                {
                    chanSum+=grid[l][r];
                    l--;
                    r++;
                }
                l=i+1;r=j-1;
                while(l<n && r>=0)
                {
                    chanSum+=grid[l][r];
                    l++;
                    r--;
                }
                l=i+1,r=j+1;
                while(l<n && r<m)
                {
                    chanSum+=grid[l][r];
                    l++;
                    r++;
                }
                mxSum = max(mxSum,chanSum);
            }
        }
        cout << mxSum << '\n';
    }
    return 0;
}