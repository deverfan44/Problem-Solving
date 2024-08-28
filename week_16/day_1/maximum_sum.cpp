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
        if(v[i]<0) minusCnt++;
    }
    ll sum = 0;
    if(minusCnt%2 == 0) {
        for(int i=0; i<n; i++) {
            sum += abs(v[i]);
        }
        cout << sum << endl;
    }
    else {
        int tmp = INT_MIN;
        int idx;

        int posTmp = INT_MAX;
        int idxTmp;
        for(int i=0; i<n; i++) {
            if(v[i]<0) {
                if(v[i]>tmp) {
                    tmp = v[i];
                    idx = i;
                }
            }
            else {
                if(v[i]<posTmp) {
                    posTmp = v[i];
                    idxTmp = i;
                }
            }
        }

        if(abs(tmp)>posTmp) {
            tmp = posTmp;
            idx = idxTmp;
        }
        for(int i=0; i<n; i++) {
            if(i==idx) {
                sum -= abs(v[i]);
            }
            else sum += abs(v[i]);
        }
        cout << sum << endl;
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