#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,q;
        cin >> n >> m >> q;

        int a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        cin >> q;

        sort(a,a+m);

        if(q <= a[0]) cout << a[0] - 1 << '\n';
        else if(q > a[0] && q < a[1]){
            int x = q - a[0];
            int y = a[1] - q;
            cout << (x+y)/2 << '\n';
        }else cout << n - a[1] << '\n';
    }
    
    
    
    return 0;
}