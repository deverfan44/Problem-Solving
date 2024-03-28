#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// Check my created code in another file

// This code I have copy form prb discussion group.And It pushed here because I have save this code  for the future.
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin >> n >> s;

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = 0;
    ll sum = 0;
    ll ans = 0;


    while (r < n)
    {
        sum += arr[r];
        while(sum >= s && l <= r)
        {
            cout << ans << endl;
            ans += n-r;
            sum-= arr[l];
            l++;
        }

        r++;
    }

    cout << ans << "\n";
    return 0;
}