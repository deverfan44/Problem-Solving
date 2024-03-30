#include <bits/stdc++.h>
using namespace std;
// Time Limit Exceed (TLE) - code 
// Check Another folder for best complexity code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> st;
        for(int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            st.push_back(s);
        }
        int flag1;
        for(int i=0; i<n; i++)
        {
            string tmp1 = st[i];
            flag1=0;
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    for(int k=0; k<n; k++)
                    {
                        if(k!=i)
                        {
                            string s1,s2,tmp2;
                            s1=st[j],s2=st[k];
                            tmp2=s1+s2;
                            if(tmp1==tmp2)
                            {
                                flag1=1;
                                break;
                            }
                        }
                    }
                    if(flag1) break;
                }
            }
            if(flag1) cout << 1;
            else cout << 0;
        }
        cout << '\n';
    }
    
    return 0;
}