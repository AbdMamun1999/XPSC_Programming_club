#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x = max(a,b);
    int y = max(c,d);

    int mn = min(a,b);
    int mn2= min(c,d);

    if(x==y){
        if(mn+mn2==x) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }else cout << "NO" << '\n';
    }
    

    return 0;
}