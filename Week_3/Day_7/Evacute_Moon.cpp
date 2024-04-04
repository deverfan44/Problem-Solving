#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,h;
        cin >> n >> m >> h;
        vector<int> cars(n), pw(m);
        for(int i=0; i<n; i++)
            cin >> cars[i];
        for(int i=0; i<m; i++)
            cin >> pw[i];
        
        sort(cars.begin(),cars.end(),greater<int>());
        sort(pw.begin(),pw.end(),greater<int>());

        ll total=0;
        int l=0,r=0;

        // MyCode
        while(l<n && r<m)
        {
            ll t= 1LL*pw[r]*h;
            if(t<cars[l])
                total+=t;
            else
                total+=cars[l];
            l++;
            r++;
        }

        // After the solution, I check YouTube videos for another approach --- This code is from youtube video

        // for(int i=0; i<min(n,m); i++)
        // {
        //     ll t= 1LL*pw[i]*h;
        //     total+=min(t,1LL*cars[i]);
        // }


        cout << total << '\n';
    }
    return 0;
}