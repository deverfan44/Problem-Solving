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
        int n,k,q;
        cin >> n >> k >> q;

        int cnt=0;
        ll ans = 0;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        for(int i=0; i<n; i++)
        {
            int x=v[i];
            if(x>q)
            {
                if(cnt >= k)
                {
                    ll t = cnt-k+1;
                    ans += (t*(t+1))/2;
                }
                cnt=0;
            }
            else cnt++;
        }
        
        if(cnt>=k)
        {
            ll t = cnt-k+1;
            ans += (t*(t+1))/2;
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}