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
        vector<int> a(n),b(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        bool check = true;
        for(int i=0; i<n; i++) {
            if(a[i] > b[i] || b[i]>a[i]+1) {
                check = false;
                break;
            }
        }

        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}