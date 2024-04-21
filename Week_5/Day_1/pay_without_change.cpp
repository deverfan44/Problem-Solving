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
        ll a,b,n,S;
        cin>>a>>b>>n>>S;
        
        ll k = S / n;
		k = min(k, a);

		if (S - n * k <= b) 
        {
			cout << "YES" << '\n';
		}
        else 
        {
			cout << "NO" << '\n';
		}
    }
    return 0;
}