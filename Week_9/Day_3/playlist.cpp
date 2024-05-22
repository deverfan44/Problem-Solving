#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    int ans = INT_MIN;
    set<int> st;

    int i=0,j=0;

    while(i<n && j<n) {
        while(j<n && !st.count(v[j])) {
            st.insert(v[j]);
            ans = max(ans,j-i+1);
            j++;
        }
        while(i<n && st.count(v[j])) {
            st.erase(v[i]);
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}