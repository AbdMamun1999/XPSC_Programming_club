#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        int ans = 2;
        if(is_sorted(a.begin(),a.end())) ans = 0;
        else if(a[0]==1 or a[n-1]==n) ans = 1;
        else if(a[0]==n && a[n-1]==1) ans = 3;

        cout << ans << '\n';
    }
    
    
    
    return 0;
}