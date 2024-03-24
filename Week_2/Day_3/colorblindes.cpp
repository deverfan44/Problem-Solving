#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char grid[2][n];
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> grid[i][j];
                if(grid[i][j]=='G')
                {
                    grid[i][j]='B';
                }
            }
        }
        int l=0,r=0;
        int flag=1;
        while(r<n)
        {
            if(grid[l][r]!=grid[l+1][r])
            {
                flag=0;
                break;
            }
            r++;
        }
        if(flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}