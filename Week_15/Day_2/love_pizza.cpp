#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5;
vector<int> tmp;

void solveIt() {
    int x;
    cin >> x;
    int ans = -1;
    
    if(x==3) cout << 4 << '\n';
    else if(x<=65536) {
        for(int i=0; i<=tmp.size(); i++) {
        if(tmp[i]>x){
            ans = tmp[i-1];
            break;
        }
        else if(tmp[i]==x) {
            ans = tmp[i];
            break;
        }
    }

    cout << abs(ans-x)*2 << '\n';
    }
    else {
        cout << (x-65536)*2 << '\n';
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=2; i<=N; i=i*2) {
        tmp.push_back(i);

    }
    while(t--) {
        solveIt();
    }
    return 0;
}