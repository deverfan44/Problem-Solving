#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int l=0,r=0;
    long long ans=0,sum=0;
    while(r<n)
    {
       sum+=v[r];
       if(sum<=k)
       {
            ans += (r-l+1);
            r++;
       }
       else
       {
            while(sum>k)
            {
                sum-=v[l];
                l++;
            }
            // if(sum<=k)
            // {
            //     ans += (r-l+1);
            //     r++;
            // }
            ans += (r-l+1);
            r++;
       }
    }

    cout << ans << endl;
    return 0;
}