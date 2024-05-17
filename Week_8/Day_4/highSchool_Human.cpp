#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,y;
    cin >> x >> y;
    if(x==y) {
        cout << '=' << '\n';
    }
    else if((x==1) || (y==1)) {
        if(x==1) {
            cout << '<' << endl;
        } 
        else {
            cout << '>' << endl;
        }
    }
    else if(((x==2)&&(y==4)) || ((x==4)&&(y==2))) {
        cout << '=' << '\n';
    }
    else if(((x==2)&&(y==3))) {
        cout << '<' << '\n';
    }
    else if((x==3)&&(y==2)) {
        cout << '>' << '\n';
    }
    else if(x>y) {
        cout  << '<' << endl;
    }
    else {
        cout << '>' << endl;
    }
    return 0;
}