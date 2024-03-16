#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int sum=0;
    if(a>b)
    {
        sum=a;
        a--;
    }
    else
    {
        sum=b;
        b--;
    }
    
    if(a>b) sum+=a;
    else sum+=b;

    cout << sum << endl;
    return 0;
}