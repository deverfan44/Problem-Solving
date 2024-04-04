#include<bits/stdc++.h>
#define ll long long

// Help form prb discussion
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>v(n);
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        int cnt=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            while(mp[v[i]]>0) 
            {
                cnt++;
                mp[v[i]]--;
                int k=v[i]+1;
                while(mp[k]>0)
                {
                    mp[k]--;
                    k++;
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
} 
