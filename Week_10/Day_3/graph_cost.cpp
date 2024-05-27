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
        
        stack<int> value,idx;
        ll cost=0;

        for(int i=0; i<n; i++) {
            while(value.size() > 1 && value.top() > v[i]) {
                int cur = value.top();
                value.pop();
                if(cur >= value.top()) {
                    idx.pop();
                }
                else {
                    value.push(cur);
                    break;
                }
            }
            value.push(v[i]);
            idx.push(i);
        }

        int lastItem = value.top();
        value.pop();
        int lastIdx = idx.top();
        idx.pop();

        while(!idx.empty()) {
            cost += max(lastItem,value.top()) * (lastIdx-idx.top());
            lastItem = value.top();
            value.pop();
            lastIdx = idx.top();
            idx.pop();
        }

        cout << cost << endl;
    }
    return 0;
}