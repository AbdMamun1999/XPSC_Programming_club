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
        int x = n;
        int cnt = 0;
        while(n){
            n = n >> 1;
            cnt++;
        }
        cnt--;

        int ans = 1;
        for (int i = 1; i <= cnt; i++)
        {
            ans*=2; 
        }

        cout <<x - ans << " " << ans << '\n';
        
    }
    
    
    
    return 0;
}