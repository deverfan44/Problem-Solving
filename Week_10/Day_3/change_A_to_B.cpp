#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,k;
        cin >> a >> b >> k;
        int tmp = b;
        int cnt = 0;
        while(tmp > a) {
            if(tmp % k == 0 && tmp/k >=a) {
                tmp /= k;
                cnt++;
            }
            else {
                if((tmp/k) < a) {
                    cnt += (tmp-a);
                    tmp -= (tmp-a);
                }
                else {
                    cnt += (tmp%k);
                    tmp -= (tmp%k);
                }

                if(tmp <= a) break;
            }
        }

        cout << cnt << endl;
    }
    
    return 0;
}