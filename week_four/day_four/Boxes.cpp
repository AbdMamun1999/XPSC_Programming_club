#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n,greater<ll>());

        ll XOR = 0,cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if(XOR < a[i]){
                XOR = a[i];
                cnt++;
            }
            else{
                XOR ^= a[i];
            }

        }

        cout << cnt << '\n';
    
    }
    
    
    return 0;
}