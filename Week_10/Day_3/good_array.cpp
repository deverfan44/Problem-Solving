#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        set<ll> st;
        ll sum=0, cnt=0;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            st.insert(x);
            v[i]=x;
            sum += x;
            if(x==1) cnt++;
        }

        if(n==1) {
            cout << "NO" << '\n';
        }
        else if(st.size()==n) {
            cout << "YES" << '\n';
        }
        else {
            if((sum-cnt)<n) {
                cout << "NO" << endl;
            }
            else cout << "YES" << endl;
        }
        
    }
    return 0;
}