#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Sparse Table Start
const int K = 25;
const int MaxN = 2e5+5;
int st[MaxN][K+1];
int logg[MaxN+1];

void initLog() {
    logg[1] = 0;
    for(int i=2; i<=MaxN; i++) {
        logg[i] = logg[i/2] + 1;
    }
}
void build(vector<int>& a) { // O(nlogn)
    int N = a.size();
    for(int i=0; i<N; i++) {
        st[i][0] = a[i];
    }
    for(int j=1; j<=K; j++) {
        for(int i=0; i+(1<<j) <= N; i++) {
            st[i][j] = max(st[i][j-1],st[i+(1<<(j-1))][j-1]);
        }
    }
}
int query(int L, int R) { // O(1)
    int j = logg[R-L+1];
    int maxi = max(st[L][j],st[R-(1<<j)+1][j]);

    return maxi;
}
// Sparse Table End


void solveIt() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) {
        v[i] = v[i-1] +(s[i-1]=='(' ? 1:-1);
    }

    build(v);
    ll ans = 0;
    map<int,deque<int>> mp;

    for(int i=0; i<=n;i++) {
        deque<int>& now = mp[v[i]];
        while(now.size()) {
            int pos = now[0];
            int maxi = query(pos,i);
            if(v[i]-(maxi-v[i]) < 0) {
                now.pop_front();
            }
            else break;
        }
        ans += now.size();
        mp[v[i]].push_back(i);
    }
    cout << ans << endl;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    initLog();
    int t=1;
    cin >> t;
    while(t--) {
        solveIt();
    }
    return 0;
}