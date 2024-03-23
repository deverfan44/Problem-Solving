#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        vector<int> v;
        vector<string> st;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            v.push_back(x);
            string s; cin >> s;
            st.push_back(s);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<v[i]; j++)
            {
                if(st[i][j]=='D')
                {
                    if(arr[i]==9) arr[i]=0;
                    else arr[i]+=1;
                }
                else
                {
                    if(arr[i]==0) arr[i]=9;
                    else arr[i]-=1;
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}