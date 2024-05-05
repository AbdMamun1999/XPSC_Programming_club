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
        string s;
        cin >> s;

        vector<pair<string, int>> ans;
        int visited[26] = {0};

        for (int i = 0; i < n; i++)
        {
            if (visited[s[i] - 'a'])
                continue;
            visited[s[i] - 'a'] = true;

            int l = 0, r = n - 1;
            char q = s[i];
            int del = 0;
            bool flag = true;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if (s[l] == q)
                    {
                        l++;
                        del++;
                    }
                    else if (s[r] == q)
                    {
                        r--;
                        del++;
                    }
                    else
                    {
                        l++;
                        r--;
                        flag = false;
                        break;
                    }
                }
            }

            if (flag)
            {
                ans.push_back({"YES", del});
            }
            else
            {
                ans.push_back({"NO", -1});
            }
        }

        bool ok = false;
        int step = INT_MAX;
        for (pair<string, int> val : ans)
        {
            if (val.first == "YES")
            {
                ok = true;
                step = min(val.second, step);
            }
        }

        if (ok)
        {
            cout << step << '\n';
        }
        else
            cout << -1 << '\n';
    }

    return 0;
}