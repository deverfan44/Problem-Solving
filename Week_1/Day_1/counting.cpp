#include <bits/stdc++.h>
using namespace std;
// solved
int main() {
    int a,b;
    cin >> a >> b;
    int sum=0;
    if(a>b) cout << sum << endl;
    else
    {
        sum=(b-a)+1;
        cout << sum << endl;
    }
    return 0;
}