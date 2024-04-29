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
        ll n,k;
        cin >> n >> k;
        vector<ll> v(k);
        for(int i=0; i<k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        ll sum = 0;
        ll saveMouse=0;
        for(int i=0; i<k; i++)
        {
            sum+=(n-v[i]);
            if(sum>=n) break;
            saveMouse++;
        }
        cout << saveMouse << endl;
    }
    return 0;
}