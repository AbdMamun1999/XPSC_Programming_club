#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;

    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = n; i > 0;)
    {
        if(i == 1)break;
        if(a[i-1]==a[n]) i--;
        else{
            ans++;
            i-=(n-i+1);
        }
    }

    cout << ans << '\n';
    
    
    return 0;
}