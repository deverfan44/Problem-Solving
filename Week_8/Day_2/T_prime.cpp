#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n) {
    if(n==1) return false;

    for(ll i=2; i*i<=n; i++) {
        if(n%i == 0) return false;
    }

    return true;
}

bool isItPerfect(ll n) {
    ll x = sqrtl(n);
    if((x*x) == n) return true;

    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        if(isPrime(sqrtl(n)) && isItPerfect(n)) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}