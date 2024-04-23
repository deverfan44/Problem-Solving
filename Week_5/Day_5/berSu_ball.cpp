#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    int m;
    cin >> m;
    vector<int> g(m);
    for(int i=0; i<m; i++)
    {
        cin >> g[i];
    }
    int l=0,r=0;
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    
    int cnt=0;
    while(l<n && r<m)
    {
        int dif=abs(b[l]-g[r]);
        if(dif<=1)
        {
            cnt++;
            l++;
            r++;
        }
        else if(b[l]>g[r]) r++;
        else if (b[l]<g[r]) l++;
    }
    cout << cnt << '\n';
    return 0;
}