#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int ans = 0;

        ans = max(ans,ar[0]-0);

        for (int i = 0; i < n-1; i++)
        {
            ans = max(ans,ar[i+1]-ar[i]);
        }

        ans = max(ans,(x-ar[n-1])*2);
        
        cout << ans << '\n';
    }
    

    return 0;
}