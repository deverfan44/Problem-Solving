#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Help from youtube
void solveIt() {
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    int cnt1=0, cnt2=0;
    for(auto x: mp) {
        if(x.second>1) {
            cnt1++;
            cnt2++;
        }
        else {
            if(cnt1>cnt2) cnt2++;
            else cnt1++;
        }
    }
    cnt2++;
    
    int ans = min(cnt1,cnt2);
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