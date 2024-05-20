#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin >> n >> x;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    vector<pair<ll,ll>> tmp;
    for(int i=0; i<n; i++) {
        tmp.push_back({v[i],i+1});
    }
    sort(tmp.begin(),tmp.end());
    vector<ll> position;
    for(int i=0; i<n; i++) {
        if(position.size()<2) {       
            if(tmp[i].first<=x) {
                x -= tmp[i].first;
                position.push_back(tmp[i].second);
            }
        }
        else {
            if(tmp[i].first == x) {
                position.push_back(tmp[i].second);
                x -= tmp[i].first;
            }
        }
        if(position.size()==3) break;
    }

    sort(position.begin(),position.end());
    if(x==0) {
        for(ll x: position) {
            cout << x << " ";
        }
        cout << endl;
    }
    else cout << "IMPOSSIBLE" << endl;
    return 0;
}