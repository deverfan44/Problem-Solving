#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    ll l,r;
    cin >> l >> r;
    if(r%2!=0) r--;
    ll cnt = 0;
    while(r!=1) {
        cnt++;
        r /= 2;
    }
    cout << cnt << endl;
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