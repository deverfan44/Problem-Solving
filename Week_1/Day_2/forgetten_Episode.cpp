#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int freq[n+1]={0};
    for(int i=1; i<n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    int forget;
    for(int i=1; i<=n; i++)
    {
        if(freq[i]==0) forget=i;
    }
    cout << forget << endl;
    return 0;
}