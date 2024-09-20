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

        int mn_idx = 0,mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if(a[i] < mn){
                mn = a[i];
                mn_idx = i;
            }
        }

        bool flag = true;
        for (int i = mn_idx; i < n-1; i++)
        {
            if(a[i] > a[i+1]){
                flag = false;
            }
        }
        
        if(flag) cout << mn_idx << '\n';
        else cout << -1 << '\n';
    }
    
    
    return 0;
}