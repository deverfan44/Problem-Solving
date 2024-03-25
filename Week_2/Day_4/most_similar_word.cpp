#include <bits/stdc++.h>
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
        vector<string> v;
        for(int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int result = INT_MAX,ans;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int l=0,sum=0;
                while(l<m)
                {
                    ans = abs(v[i][l]-v[j][l]);
                    sum+=ans;
                    l++;
                }
                if(sum<result) result = sum;
            }
        }
        cout << result << '\n';
    }
    return 0;
}