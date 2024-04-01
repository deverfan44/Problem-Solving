#include <bits/stdc++.h>
#define ll long long int
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
        string s;
        cin >> s;
        vector<ll> dec;
        ll total=0,minChan=0;
        for(int i=0; i<n; i++)
        {
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L)
                {
                    minChan++;
                    total+=R;
                    dec.push_back(R-L);
                }
                else
                {
                    total+=L;
                }
            }
            else
            {
                if(L>R)
                {
                    minChan++;
                    total+=L;
                    dec.push_back(L-R);
                }
                else
                {
                    total+=R;
                }
            }
        }
        vector<ll> ans(n);
        minChan--;
        for(int i=minChan; i<n; i++)
        {
            ans[i]=total;
        }
        sort(dec.begin(),dec.end(),greater<ll>());
        for(int i=minChan-1; i>=0; i--)
        {
            total-=dec.back();
            dec.pop_back();
            ans[i]=total;
        }

        for(int i=0; i<n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}