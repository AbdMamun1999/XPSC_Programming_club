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
        int n,x;
        cin >> n >> x;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int odd_cnt = 0,even_cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0)even_cnt++;
            else odd_cnt++;
        }
        
        if(odd_cnt==n){
            if(x%2==0) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }
        else if(odd_cnt+even_cnt==x){
            if(odd_cnt%2==0) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }else{
            if(odd_cnt%2==0)odd_cnt--;
            if(odd_cnt > 0 && odd_cnt%2!=0){
                cout << "YES" << '\n';
            }else cout << "NO" << '\n';
        }
    
    }
    
    return 0;
}