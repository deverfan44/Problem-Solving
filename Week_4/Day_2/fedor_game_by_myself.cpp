#include <bits/stdc++.h>
using namespace std;

int countSetBit(int x)
{
    int cnt=0;
    while(x!=0)
    {
        if(x&1) cnt++;
        x=x>>1;
    }
    return cnt;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for(int i=0; i<(m+1); i++)
    {
        cin >> v[i];
    }
    int frdCnt=0;
    for(int i=0; i<m; i++)
    {
        int x = v[i]^v[m];
        int setBit = countSetBit(x);
        if(setBit <= k) frdCnt++;
    }
    
    cout << frdCnt << '\n';
    return 0;
}