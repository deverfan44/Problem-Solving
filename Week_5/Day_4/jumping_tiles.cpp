#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(int x,int y)
{
    return x>y;
}
bool cmp1(pair<char,int> x, pair<char,int> y)
{
    return x.first<y.first;
}
bool cmp2(pair<char,int> x, pair<char,int> y)
{
    return x.first>y.first;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll n = s.length();
        ll first,last;
        vector<pair<char,int>> p;
        for(int i=0; i<n; i++)
        {
            ll ascii = (s[i]-'a')+1;
            if(i==0) first=ascii;
            if(i==n-1) last=ascii;
        }
        vector<ll> jumpArray,saveVal;
        ll sum=0;
        ll smallVal = min(first,last);
        ll bigVal = max(first,last);
        for(int i=0; i<n; i++)
        {
            ll ascii = (s[i]-'a')+1;
            if(ascii>=smallVal && ascii<=bigVal)
            {
                jumpArray.push_back(i+1);
                saveVal.push_back(ascii);
                p.push_back({s[i],i});
            }
        }
        sort(saveVal.begin(),saveVal.end(),check);
        // or sort(saveVal.begin(),saveVal.end(),greater<int>());
        for(int i=1; i<saveVal.size(); i++)
        {
            sum+= (saveVal[i-1]-saveVal[i]);
        }
        cout << sum << " " << jumpArray.size() << '\n';

        if(first<last)
        {
            sort(p.begin()+1,p.end()-1,cmp1);
        }
        else
        {
            sort(p.begin()+1,p.end()-1,cmp2);
        }

        vector<int> v;
        v.push_back(1);
        for(int i=1; i<p.size(); i++)
        {
            v.push_back(p[i].second+1);
        }
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';
    
    }
    return 0;
}