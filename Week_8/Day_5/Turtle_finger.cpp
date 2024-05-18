#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Help From Youtube

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {    
        int a,b,l;
        cin >> a >> b >> l;

        set<int> st;
        for(int i=0; i<=20; i++) {
            int tmp1 = pow(a,i);
            if(l%tmp1 == 0) {
                int sv = l/tmp1;
                for(int j=0; j<=20; j++) {
                    int tmp2 = pow(b,j);
                    if(sv%tmp2 == 0) {
                        st.insert(sv/tmp2);
                    }
                }
            }
        }

        cout << st.size() << endl;
    }
    return 0;
}