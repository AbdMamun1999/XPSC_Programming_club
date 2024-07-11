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

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }   

        int ans = INT_MAX,enven=0;
        for (int i = 0; i < n; i++)
        {
            int x = ar[i]%k;
            if(x==0)ans = 0;
            else ans = min(ans,k-x);
            if(ar[i]%2==0)enven++;
        }

        if(k!=4){
            cout << ans << '\n';
        }else{
            if(enven ==0) cout << min(ans,2) << '\n';
            else if(enven==1) cout << min(ans,1) << '\n';
            else cout <<min(ans,0) << '\n';
        }
        
    }
    
    

    

    return 0;
}