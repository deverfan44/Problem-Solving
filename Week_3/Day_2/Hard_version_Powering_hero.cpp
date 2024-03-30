#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Hard Version
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue<ll> pq;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x!=0)
            {
                pq.push(x);
            }
            else
            {
                if(!pq.empty())
                {
                    sum+=pq.top();
                    pq.pop();
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}