#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(int n) {
    for(int i=2; i*i <= n; i++) {
        if(n%i == 0) return false;
    }

    return true;
}
void solveIt() {
    int d;
    cin >> d;
    int x = 1+d;
    ll result1,result2;
    while(true) {
        if(isPrime(x)){
            result1 = x;
            break;
        }
        x++;
    }
    x+=d;
    while(true) {
        if(isPrime(x)){
            result2 = x;
            break;
        }
        x++;
    }

    ll ans = result1*result2;
    cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solveIt();
    }
    return 0;
}
