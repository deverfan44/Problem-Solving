#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    priority_queue<int> pq;
    for(auto x: mp) {
        pq.push(x.second);
    }
    
    while(pq.size()>=2) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        x--;
        y--;

        if(x!=0) pq.push(x);
        if(y!=0) pq.push(y);
    }
    if(pq.size()==0) {
        cout << 0 << '\n';
    }
    else cout << pq.top() << '\n';
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