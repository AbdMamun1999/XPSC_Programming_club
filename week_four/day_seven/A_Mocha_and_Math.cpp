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
        
        int mn = ar[0];
        for (int i = 1; i < n; i++)
        {
            mn&=ar[i];
        }

        cout << mn << '\n';
    }
    
    

    return 0;
}