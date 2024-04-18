#include <bits/stdc++.h>
using namespace std;
// Optimized Solution
int check_last_set_bit(int x)
{
    int ans =0;
    while(x!=0)
    {
        x = x>>1;
        ans++;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
   
    while(t--)
    {
        int n;
        cin >> n;
        int x = check_last_set_bit(n);
        int ans = pow(2,(x-1));
        cout << ans-1 << '\n';
    }
    return 0;
}