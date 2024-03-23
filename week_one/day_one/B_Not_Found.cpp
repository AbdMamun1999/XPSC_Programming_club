/*https://atcoder.jp/contests/abc071/tasks/abc071_b*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int cnt[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'a']++;
    }

    bool flag = true;
    int idx = 0;
    for (int i = 0; i < 26; i++)
    {
        if (!cnt[i])
        {
            flag = false;
            idx = i;
            break;
        }
    }

    if (flag)
        cout << "None"
             << "\n";
    else
        cout << (char)(idx + 'a') << "\n";

    return 0;
}