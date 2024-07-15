#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    ll n,k;
    cin >> n >> k;
    ll cnt = 0;
    ll sum=0, i=1;
    if(n==1 && k==1) {
        cout << 0 << endl;
    }
    else if(k==0) {
        while(sum<=n) {
            sum = sum+i;
            cnt++;
            i++;
        }
        cnt--;
        ll ans = (cnt*(cnt+1))/2;

        cout << ans << endl;
    }
    else {
        while(sum<k) {
            cnt++;
            sum = sum+i;
            i++;    
        }
        cout << (n-cnt) << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    solveIt();
    return 0;
}