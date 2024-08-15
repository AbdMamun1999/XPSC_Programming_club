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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mn = 1,mx = n;
        int l = 0, r = n-1;
        while (l<=r)
        {
            if(a[l]==mn){
                l++;
                mn++;
            }else if(a[l]==mx){
                l++;
                mx--;
            }else if(a[r]==mn){
                r--;
                mn++;
            }else if(a[r]==mx){
                r--;
                mx--;
            }
            else break;
        }
        
        if(l <= r) cout << l+1 << " " << r+1 << '\n';
        else cout << -1 << '\n';
    }
    
    
    return 0;
}