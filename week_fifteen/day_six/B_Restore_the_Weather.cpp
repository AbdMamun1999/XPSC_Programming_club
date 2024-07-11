#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        
        vector<pair<int,int>>ap;
        for (int i = 0; i < n; i++)
        {
            ap.push_back({a[i],i});
        }

        sort(ap.begin(),ap.end());
        sort(b,b+n);

        int c[n];
        for (int i = 0; i < n; i++)
        {
            c[ap[i].second]=b[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout << '\n';
    }
    
    

    return 0;
}