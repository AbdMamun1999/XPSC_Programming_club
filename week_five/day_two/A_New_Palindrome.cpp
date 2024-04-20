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
        string s;
        cin >> s;
        map<char, int> mp;
        for (char ch : s)
        {
            mp[ch]++;
        }

        int pair_count = 0;
        for (pair<char, int> val : mp)
        {
            if (val.second >= 2)
            {
                pair_count++;
            }
        }

        if (pair_count >= 2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}