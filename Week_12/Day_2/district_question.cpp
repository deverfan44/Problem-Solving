#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    set<int> s;
    map<int,vector<int>> mp;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        s.insert(x);
        mp[x].push_back(i);
    }
    if(s.size()==1){
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
        vector<vector<int>> tmp;
        for(auto x: mp) {
            tmp.push_back(x.second);
        }
        
        for(int i=1; i<tmp.size(); i++) {
            for(auto j: tmp[i]) {
                cout << tmp[0][0]+1 << " " << j+1 << endl;
            }
        }

        for(int i=1; i<tmp[0].size(); i++) {
            cout << tmp[0][i]+1 << " " << tmp[1][0]+1 << '\n';
        }
    }

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