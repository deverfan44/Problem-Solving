#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Brute force solution // its for future saving
// check another file for best complexity code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        while(k--)
        {
            ll a,b;
            cin >> a >> b;
            int flag1=0,flag2=0;
            int k=-1;
            for(int i=0; i<n; i++)
            {
                if(v[i]==a && flag1==0)
                {
                    flag1=1;
                    k=i;
                }
                if(v[i]==b) flag2 = 1;
            }
            if(flag1==0 || flag2==0)
            {
                cout << "NO" << endl;
                continue;
            }
            int check=0;
            for(int i=k+1; i<n; i++)
            {
                if(v[i]==b) check=1; 
            }
            if(check) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}