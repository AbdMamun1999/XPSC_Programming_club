#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0,r = 0,ans = 0,cnt = 0;
        while (r < n)
        {
            if(a[r]%2==1)cnt++;
            if(r - l + 1 == k){
                if(cnt >= 1)ans++;
                if(a[l]%2==1) cnt--; 
                l++;
            }
            r++;
        }

        cout << ans << '\n';
    }
    
    
    
    return 0;
}