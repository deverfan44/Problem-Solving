#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Help Form youtube.. It was totally a new idea

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    k=n;
    map<ll,ll> mp;
    mp[0]=1;
    ll sum=0,cnt=0;
    for(int i=0; i<n; i++) {
        sum += v[i];
        ll x = sum%k;
        if(x<0) x += k;

        if(mp[x]) {
            cnt+=mp[x];
            mp[x]++;
        }
        else {
            mp[x]++;
        }
    }
    cout << cnt << endl;
    return 0;
}