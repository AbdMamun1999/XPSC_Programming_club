/*https://codeforces.com/contest/1722/problem/A*/
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

        string s1;
        cin >> s1;

        int cnt1[26] = {0};
        int T = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] >= 'a' && s1[i] <= 'z')
            {
                cnt1[s1[i] - 'a']++;
            }
            if (s1[i] == 'T')
                T++;
        }

        string name = "Timur";
        int cnt2[26] = {0};
        for (int i = 1; i < name.size(); i++)
        {
            cnt2[name[i] - 'a']++;
        }

        if (s1.size() == 5 && T == 1)
        {
            bool flag = true;
            for (int i = 0; i < 26; i++)
            {
                if (cnt1[i] != cnt2[i])
                {
                    flag = false;
                }

                // cout << cnt1[i] << " " << cnt2[i] << " " << i + 97 << endl;
            }

            if (flag)
                cout << "YES" << '\n';
            else
            {
                cout << "NO" << '\n';
            }
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}