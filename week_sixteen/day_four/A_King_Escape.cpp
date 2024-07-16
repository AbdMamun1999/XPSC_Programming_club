#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int  q1,q2, r1,r2, d1,d2;
    cin >> q1 >> q2 >> r1 >> r2 >> d1 >> d2;

    if(q1 >= r1 && q1 <= d1) cout << "NO" << '\n';
    else if(q2 >= r2 && q2 <= d2) cout << "NO" << '\n';
    else if(r1 >= q1 && q1 >= d1) cout << "NO" << '\n';
    else if(r2 >= q2 && q2 >= d2) cout << "NO" << '\n';
    else cout << "YES" << '\n';

    return 0;
}