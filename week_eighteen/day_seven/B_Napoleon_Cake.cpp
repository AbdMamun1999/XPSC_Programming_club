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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int>v;
        int ans = 0;
        for (int i = n-1; i >= 0; i--)
        {
            if(a[i]>0) ans = max(ans,a[i]);
            if(ans > 0){
                v.push_back(1);
                ans--;
            }else v.push_back(0);
        }
        
        reverse(v.begin(),v.end());

        for (auto val : v)
        {
            cout << val << " ";
        }
        
        cout << '\n';
    }
    
    
    return 0;
}