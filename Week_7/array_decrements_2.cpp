#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n),b(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        set<ll> st1,st2;
        for(int i=0; i<n; i++) {
            ll x = a[i]-b[i];
            if(b[i]>0) st2.insert(x);
            else st1.insert(x);
        }

        if(st2.size()==0) cout << "YES" << endl;
        else if(st2.size()==1 && *(st2.begin()) >= 0) {
            if(st1.size()==0 || (*(st1.rbegin())) <= (*(st2.begin()))) {
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }   
        else cout << "NO" << endl;

    }
    return 0;
}