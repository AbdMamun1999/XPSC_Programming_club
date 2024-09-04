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
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        vector<int>ans(n);
        int idx = n-1;
        for (int i = 0; i < n; i+=2)
        {
            ans[i]=v[idx];
            idx--;
        }

        idx = 0;
        for (int i = 1; i < n; i+=2)
        {
            ans[i]= v[idx];
            idx++;
        }

        int res = ans[0];
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if(res == ans[i]){
                flag = false;
                break;
            }
            else res+=ans[i];
        }

        if(flag){
            cout << "YES" << '\n';
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << '\n';
        }else cout << "NO" << '\n';
    }
    
    
    
    return 0;
}