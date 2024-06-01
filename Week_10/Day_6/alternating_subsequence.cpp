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
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        int val = INT_MIN;
        int tmp = INT_MIN;
        int i=0;
        vector<ll> ans;
        while(i<n) {
            while(v[i] > 0 && i<n) {
                val = max(val,v[i]);
                i++;
            }
            if(i>0 && v[i-1] > 0) {
                ans.push_back(val);
                val = INT_MIN;
            }
            
            while(v[i] < 0 && i<n) {
                tmp = max(tmp,v[i]);
                i++;
            }
            if(i>0 && v[i-1] < 0) {
                ans.push_back(tmp);
                tmp = INT_MIN;
            }
        }

        ll sum=0;
        for(int i=0; i<ans.size(); i++) {
            sum += ans[i];
        }
        cout << sum << endl;
    }
    return 0;
}