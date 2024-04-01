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
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]] = true;
        }

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            string sub1, sub2;
            bool flag = false;
            for (int j = 0; j < s[i].size(); j++)
            {
                sub1 = s[i].substr(0, j + 1);
                sub2 = s[i].substr(j + 1, s[i].size());
                // cout << sub1 << " " << sub2 << endl;
                if (mp[sub1] && mp[sub2])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                v.push_back(1);
            else
                v.push_back(0);
            flag = false;
        }

        for (int val : v)
        {
            cout << val;
        }
        cout << '\n';
    }

    return 0;
}