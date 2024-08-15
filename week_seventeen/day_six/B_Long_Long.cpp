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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll cnt = 0,ans = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            ans+=abs(a[i]);
            if(a[i] <= 0){
                if(a[i]==0) continue;
                if(flag){
                cnt++;
                flag = false;
                }
            }else{
                flag = true;
            }
        }

        cout <<ans << " " << cnt << '\n';
    }
    
    
    
    return 0;
}