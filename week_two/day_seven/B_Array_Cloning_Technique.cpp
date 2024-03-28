#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i]]++;
        }

        int mx = 0;
        for (auto it : mp)
        {
            mx = max(mx, it.second);
        }

        int ans = 0;
        while (mx < n)
        {
            ans++;
            // jotota ache abong jotota banaite hobe tar moddhe minimum ta
            //  akhane "mx" hocche sorboccho value kotobar ache 
            //"n-mx"amake kotobar value ta banate hobe
            ans += min(mx, n - mx);
            // mx += min(mx, n - mx) joto gula banao hoyeche 
            mx += min(mx, n - mx);
        }

        cout << ans << '\n';
    }

    return 0;
}