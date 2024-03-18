#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    int newArray[n+m];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }
    int l=0,r=0,k=0;
    while(l<n && r<m)
    {
        if(a[l]<b[r])
        {
            newArray[k]=a[l];
            l++;
            k++;
        }
        else
        {
            newArray[k]=b[r];
            r++;
            k++;
        }
    }

    if(l==n && r<m)
    {
        for(int i=r; i<m; i++)
        {
            newArray[k]=b[i];
            k++;
        }
    }
    if(r==m && l<n)
    {
        for(int i=l; i<n; i++)
        {
            newArray[k]=a[i];
            k++;
        }
    }

    for(int i=0; i<n+m; i++)
    {
        cout << newArray[i] << " ";
    }
    return 0;
}