#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v={2,3,4,5,6};
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}