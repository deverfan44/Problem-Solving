#include <bits/stdc++.h>
using namespace std;
// After 2.5 hour, At last successfully solved
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long int k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int l=0,r=0,ans=INT_MAX;
    long long sum=0;
    while(r<n)
    {
        if(v[r]>=k)
        {
            ans=1;
            break;
        }
        sum+=v[r];
        if(sum>=k)
        {
            while(sum>=k)
            {
                ans=min(ans,r-l+1);
                sum-=v[l];
                l++;
            }
            sum-=v[r];
        }
        else
        {
            r++;
        }
    }
 
    if(ans==INT_MAX) cout << "-1" << '\n';
    else cout << ans << '\n';
    return 0;
}