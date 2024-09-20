#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    // int t;
    // cin >> t;
    // while (t--)
    // {
        int k,n;
        cin >> k >> n;

        int x = ceil(double(n)/k);

        for (int i = 1; i <= n; i+=x)
        {
            cout << i << " ";
        }
        
    
    // }
    
    
    return 0;
}