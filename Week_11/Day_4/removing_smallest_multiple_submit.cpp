#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    str = '@' + str;
    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++) {
        if(str[i]=='1') v[i]=2;
    }

    ll ans = 0;
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j+=i) {
            if(v[j]==0) {
                v[j]=1;
                ans += i;
            }
            else if(v[j]==2) break;
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