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
        int n,k;
        cin >> n >> k;
    
        int a[n*k];
        for (int i = 1; i <= n*k; i++)
        {
            cin >> a[i];
        }

        int x = (n+1)/2-1;
        x = n-x;
        
        int z = k*n+1;

        int ans = 0;
        while (k--)
        {
            z-=x;
            if(z < 0)break;
            ans+=a[z];
        }
        
        cout << ans << '\n';
    }
    
    
    return 0;
}