#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();
    int first, last;
    int x = s[0] - 'a';
    int y = s[n - 1] - 'a';

    if (x > y)
    {
        first = y;
        last = x;
    }
    else
    {
        last = y;
        first = x;
    }

    int cnt[n];
    map<char, vector<int>> idx;
    for (int i = 0; i < n; i++)
    {
        cnt[s[i] - 'a']++;
        idx[s[i]].push_back(i);
    }

    for (auto i : idx)
    {
        for (auto j : i.second)
        {
            cout << i.first << " " << j << endl;
        }
    }

    return 0;
}