#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k,n;
    cin >> k >> n;
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        sum+=x;
    }
    ll result = sum/k;
    cout << result << '\n';
    return 0;
}