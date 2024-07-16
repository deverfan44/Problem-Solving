#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Hints from youtube
void solveIt() {
    ll n,k;
    cin >> n >> k;
    ll l=0, h=n;
    while(l<=h) {
        ll e = l+(h-l)/2;
        ll calculate = ((n-e)*(n-e+1))/2;
        if((calculate-e) == k) {
            cout << e << '\n';
            return;
        }
        else if((calculate-e)<k) {
            h = e-1;
        }
        else l = e+1;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    solveIt();
    return 0;
}
