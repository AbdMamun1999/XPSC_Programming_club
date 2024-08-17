#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k;
        cin >> n >> m >> k;

        int a[n],b[m];
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = 1;
        }
        
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if(mp[b[i]]==1) mp[b[i]] = 4;
            else if(mp[b[i]]==0) mp[b[i]] = 2;
        }

        int cnt1 = k/2,cnt2 = k/2;
        for (int i = 1; i <= k; i++)
        {
            if(mp[i]==1) cnt1--;
            if(mp[i]==2) cnt2--;
            if(mp[i]==0)cnt1=-1;
        }
        
        if(cnt1 >= 0 && cnt2 >= 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    
    return 0;
}