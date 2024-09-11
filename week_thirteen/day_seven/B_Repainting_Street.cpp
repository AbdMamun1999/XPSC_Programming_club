#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,k;
    cin >> n >> k;

    int a[n];
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int mx = 0,value = 0;
    for (auto [x,y] : mp)
    {
        if(y >= mx){
            mx = y;
            value = x;
        }
    }
    
    int cnt = 0,ans = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!= mx){
            flag = true;
        }
        if(flag) {
            cnt++;
        }
        if(flag && cnt==k){
            ans++;
            cnt = 0;
            flag = false;
        }
        cout << cnt << endl;
    }
    
    cout << ans << endl;
    
    
    
    return 0;
}