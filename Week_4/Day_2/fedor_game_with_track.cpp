#include <bits/stdc++.h>
using namespace std;

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
    vector<vector<int>> mask;
    for(int i=0; i<(m+1); i++)
    {
        vector<int> tmp;
        for(int k=0; k<n; k++)
        {
            if(v[i]&(1<<k)) tmp.push_back(1);
            else tmp.push_back(0);
        }
        mask.push_back(tmp);
    }
    vector<int> fedor = mask[m];

    int frdCnt = 0;
    for(int i=0; i<mask.size()-1; i++)
    {
        int tmp=0;
        for(int k=0; k<n; k++)
        {
            if(mask[i][k] != fedor[k]) tmp++;
        }
        if(tmp<=k) frdCnt++;
    }

    cout << frdCnt << '\n';
    return 0;
}