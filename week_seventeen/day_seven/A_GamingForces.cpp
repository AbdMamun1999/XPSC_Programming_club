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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
           int a;
           cin >> a; 
           if(a==1)cnt++;
        }

        cout << n - (cnt/2) << '\n';
    }
    
    
    
    return 0;
}