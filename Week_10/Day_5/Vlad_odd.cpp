#include <bits/stdc++.h>
#define ll long long
using namespace std;
// alpo akto youtube er help nici,, LL dia multiple korar bisoi ti
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;
        ll sum = 0, cnt = 0;
        while(n>1) {
            ll tmp = (n+1)/2;
            n = n-tmp;
            if(sum+tmp<k) {
                sum+=tmp;
                cnt++;
            }
            else {
                break;
            }
        }

        ll t=k-sum;
        t*=2LL;
        t--;
        ll val = (1LL<<(cnt));
        ll ans = t*val;
        cout << ans << endl;

    }
    return 0;
}