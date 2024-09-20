#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n;
    cin >> n;

    ll a[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }

    ll x = ceil((double)sum / n);

    for (int i = 0; i < n; i++)
    {
        cout << abs(40741153 - a[i]) << " ";
    }

    cout << '\n' << endl;


    for (int i = 0; i < n; i++)
    {
        cout << abs(x - a[i]) << " ";
    }
    
    return 0;
}