#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0,cnt = 0;
    for (auto ch : s)
    {
        if(ch == 'A')cnt++;
        else ans+=cnt;
    }

    cout << ans << '\n';
    
    return 0;
}