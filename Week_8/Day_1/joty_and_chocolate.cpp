#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a,ll b) {
    return __gcd(a,b);
}
ll lcm(ll a, ll b){
    return ((a/gcd(a,b))*b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    ll result1 = n/a, result2 = n/b;
    ll result3 = n/lcm(a,b);
    if(p>q){
        result2 -= result3;
    }
    else result1 -= result3;

    ll ans = (result1*p)+(result2*q);
    cout << ans << endl;
    return 0;
}