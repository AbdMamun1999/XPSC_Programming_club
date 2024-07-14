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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int mn = INT_MAX,idx = 0;
        for (int i = 0; i < n; i++)
        {
            if(mn >= ar[i]){
                mn = ar[i];
                idx = i;
            }
        }

        ar[idx]=ar[idx]+1;

        long long ans = ar[0];
        for (int i = 1; i < n; i++)
        {
            ans *= ar[i];
        }

        cout << ans << '\n';
   }
   
    
    return 0;
}