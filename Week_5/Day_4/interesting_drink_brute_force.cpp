#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        ll m;
        cin >> m;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]<=m) cnt++;
        }
        cout << cnt << '\n';
    }
    
    return 0;
}