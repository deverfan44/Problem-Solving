#include <bits/stdc++.h>
using namespace std;
// Brute Force solution
// check another file for optimized solution
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans;
        int cnt=n;
        while(n>0)
        {
            int x=n-1;
            cnt = cnt & x;
            if(cnt==0)
            {
                ans = x;
                break;
            }
            n=n-1;
        }
        cout << ans << '\n';
    }
    return 0;
}