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
    int l=0, r=0, cnt=0;
    ll sum=0;
    while(r<n) {
        if(sum<x) {
            sum += v[r];
        }

        if(sum==x) {
            cnt++;
            sum -= v[l];
            l++;
        }
        if(sum > x) {
            sum -= v[l];
            l++;
        }
        if(sum<x) {
            r++;
        }
    }

    cout << cnt << endl;
    return 0;
}