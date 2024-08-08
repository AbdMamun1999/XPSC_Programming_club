#include <bits/stdc++.h>
using namespace std; 


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
   
    // int t;
    // cin >> t;

    // while (t--)
    // {
        int n, k, x;
        cin >> n >> k >> x;
        
        int A[n + 1] = {0};
        for (int i = 1; i <= n; i++)
            cin >> A[i];
        
        for (int i = 0; i <= n; i++)
        {
            cout << A[i] <<" ";
        }
        
        sort(A + 1, A + n + 1, greater<int>());

        for (int i = 1; i <= n; i++)
            A[i] += A[i - 1];

        cout << endl;

        for (int i = 0; i <= n; i++)
        {
            cout << A[i] <<" ";
        }

        cout << endl;
        
        int ans = -1e9;
        for (int i = 0; i <= k; i++){
            ans = max(ans, A[n] - 2 * A[min(i + x, n)] + A[i]);
            cout << A[n] - 2 * A[min(i + x, n)] + A[i] << " ";
        }
        
        // cout<<ans<<"\n";
        // }
    return 0;
}
    