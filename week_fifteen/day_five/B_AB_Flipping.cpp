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
        string s;
        cin >> s;
        int ans = n-1;
        for (auto ch : s)
        {
            if(ch=='B')ans--;
            else break;
        }

        reverse(s.begin(),s.end());
        for (auto ch : s)
        {
            if(ch=='A')ans--;
            else break;
        }

        if(ans < 0) cout<< 0 << '\n';
        else cout << ans << '\n';
    }
    
    
    return 0;
}