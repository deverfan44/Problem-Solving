#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveIt() {
    int n;
    cin >> n;
    vector<int> v(n);
    int minusCnt = 0;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]<=0) minusCnt++;
    }
    if(minusCnt==n) cout << 0 << endl;
    else {    
        int cnt1 = 0, cnt2 = 0;
        int i=0;
        while(v[i]<=0) {
            cnt1++;
            i++;
        }
        int j = n-1;
        while(v[j]<=0) {
            cnt2++;
            j--;
        }
        int zeroCnt = 0;
        for(int k=i; k<=j; k++) {
            if(v[k]==0) zeroCnt++;
        }

        cout << (minusCnt-(cnt1+cnt2))-zeroCnt << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solveIt();
    }
    return 0;
}