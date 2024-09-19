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

        if(n%2==0)cout << "NO" << '\n';
        else{
            cout << "YES" << '\n';
            int a[n];
            for (int i = 0; i < n; i++)
            {
                a[i] = i+1;
            }
            int b[n];
            int x = n*2;
            for (int i = n/2; i >= 0; i--)
            {
                b[i] = x;
                x--;
            }
            
            for (int i = n-1; i > n/2; i--)
            {
                b[i]=x;
                x--;
            }
            
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " "<< b[i] << endl;
            }
            
            
        }
    }
    
    return 0;
}