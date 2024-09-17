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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mx = 0;
        for (int i = 0; i < n-1; i++)
        {
            mx = max(mx,a[i]);
        }
        
        cout << mx + a[n-1] << '\n';
    }
    
    
    return 0;
}