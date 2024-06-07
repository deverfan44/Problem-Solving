#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    str = '@' + str;
    map<int,int> mp;
    for(int i=1; i<=n; i++) {
        if(str[i]=='1') {
            mp[i] = 1;
        }
        else mp[i] = 0;
    }
    
    ll ans = 0;
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j+=i) {
            if(mp[j] == 0) {
                mp[j] = 2;
                ans += i;
            }
            else if(mp[j]==1) break;
        }
    }
    cout << ans << endl;
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