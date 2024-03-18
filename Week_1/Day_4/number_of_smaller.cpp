#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }
    int l=0,r=0,ans=0;
 
    while(r<m)
    {
        int sum=0;
        while(a[l]<b[r] && l<n)
        {
            sum++;
            l++;
        }
        ans+=sum;
        r++;
        cout << ans <<" ";
    }
    return 0;
}
