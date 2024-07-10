#include <bits/stdc++.h>
#define ll long long
using namespace std;

void f(vector<int>& v, vector<int>& a, vector<vector<int>>& ans,int frq[]) {
    if(v.size()== a.size()) {
        ans.push_back(a);
        return;
    }

    for(int i=0; i<v.size(); i++) {
        if(frq[i]==0) {
            a.push_back(v[i]);
            frq[i] = 1;
            f(v,a,ans,frq);
            frq[i]=0;
            a.pop_back();
        }
    }
}
vector<vector<int>> permute(vector<int>& v) {
    vector<vector<int>> ans;
    vector<int> a;
    int frq[v.size()];
    for(int i=0; i<v.size(); i++) {
        frq[i]=0;
    }

    f(v,a,ans,frq);

    for(auto x: ans) {
        for(auto i: x) {
            cout << i << " ";
        }
        cout << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    permute(v);
    return 0;
}