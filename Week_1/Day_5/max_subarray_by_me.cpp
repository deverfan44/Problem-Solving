#include <bits/stdc++.h>
#define ll long long
using namespace std;
// totally created by me
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int l=1,r=k;
    ll sum=0;
    for(int i=0; i<k; i++)
    {
        sum+=arr[i];
    }
    ll bfr=sum;
    ll ans = 0;
    while(r<n)
    {
        ans=arr[r]+(bfr-arr[l-1]);
        bfr=ans;
        if(ans>sum)
        {
            sum=ans;
        }
        l++;
        r++;
    }
    cout << sum << '\n';
    return 0;
}