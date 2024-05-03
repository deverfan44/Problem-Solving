#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Help From youtube
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,cows;
    cin >> n >> cows;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    auto ok = [&](long long mid) {
        long long cntcows=1,lastStall=v[0];
        for(int i=1; i<v.size(); i++) {
            if(v[i]-lastStall >= mid) {
                cntcows++;
                lastStall=v[i];
            }
            if(cntcows>=cows) return true;
        }
        return false;
    };

    long long l=0, r=(v[n-1]-v[0]), mid, ans;
    while(l<=r) {
        mid=l+(r-l)/2;
        if(ok(mid)) {
            ans=mid;
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    
    cout << ans << endl;
    return 0;
}