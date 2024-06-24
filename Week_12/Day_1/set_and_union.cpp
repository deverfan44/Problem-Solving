#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    vector<int> v[n];
    vector<int> uniAll;
    for(int i=0; i<n; i++) {
        int k;
        cin >> k;
        v[i].resize(k);
        for(int j=0; j<v[i].size(); j++) {
            cin >> v[i][j];
            uniAll.push_back(v[i][j]);
        }
    }

    sort(uniAll.begin(),uniAll.end());
    uniAll.erase(unique(uniAll.begin(),uniAll.end()),uniAll.end());

    int ans = 0;
    for(int x=1; x<=50; x++) {
        vector<int> tmp;
        for(int i=0; i<n; i++) {
            bool flag = false;
            for(int j=0; j<v[i].size(); j++) {
                if(v[i][j]==x) {
                    flag = true;
                    break;
                }
            }
            if(!flag) {
                for(int j=0; j<v[i].size(); j++) {
                    tmp.push_back(v[i][j]);
                }
            }
        }
        sort(tmp.begin(),tmp.end());
        tmp.erase(unique(tmp.begin(),tmp.end()),tmp.end());
        if(tmp!=uniAll) {
            ans = max(ans,(int)tmp.size());
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