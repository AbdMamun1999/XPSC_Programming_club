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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int freq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            int x = s[i] - 'a';
            freq[x]++;
        }

        int flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                flag++;
            }
        }

        if (flag >k + 1)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}