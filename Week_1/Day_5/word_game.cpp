#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while(t--)
        {
            int n;
            cin >> n;
            vector<string> v;
            map<string, int> mp;
            for(int i=0; i<n*3; i++)
            {
                string s;
                cin >> s;
                v.push_back(s);
                mp[s]++;
            }
            int p=0;
            int k;
            int sum;
            for(int i=0; i<3; i++)
            {
                sum=0;
                for(int i=0; i<n; i++)
                {
                    // if(p==n*3) break;
                    k=0;
                    if (mp[v[p]] == 1)
                    {
                        k += 3;
                    }
                    if (mp[v[p]] == 2)
                    {
                        k++;
                    }
                    p++;
                    sum=sum+k;
                }
                cout << sum << " ";
            }
            cout << endl;
        }   
    return 0;
}