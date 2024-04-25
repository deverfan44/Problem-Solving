#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int m = (n*(n-1))/2;
        vector<ll> b(m);
        for(int i=0; i<m; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(),b.end());
        vector<ll> a(n);
        int x=1,ind=0;
        int restor = n-x;
        while((n-x )> 0)
        {
            a[ind] = b[restor-1];
            ind++; x++;
            restor += n-x;
        }
        a[n-1] = 1e9;
        for(int i=0; i<n; i++)
        {
            cout << a[i] << " "; 
        }
        cout << '\n';
    }
    return 0;
}