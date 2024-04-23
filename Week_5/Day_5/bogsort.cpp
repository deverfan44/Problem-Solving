#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int x: v) cout << x << " ";
        cout << endl;
    }
    return 0;
}