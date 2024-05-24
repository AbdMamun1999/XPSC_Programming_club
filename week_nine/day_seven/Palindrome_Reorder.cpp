#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char, int> mp;
    for (auto ch : s)
    {
        mp[ch]++;
    }

    int odd = 0;
    for (auto val : mp)
    {
        if (val.second % 2 != 0)
            odd++;
    }

    if (odd >= 2)
        cout << "NO SOLUTION" << '\n';
    else
    {

        vector<char> v;
        vector<char> single_value;
        for (pair<int, int> val : mp)
        {
            int x = val.second;
            if (val.second % 2 == 0)
            {
                while (x > val.second / 2)
                {

                    v.push_back(val.first);
                    x--;
                }
            }
            else
            {
                while (x > 0)
                {
                    single_value.push_back(val.first);
                    x--;
                }
            }
        }

        for (auto val : v)
        {
            cout << val;
        }

        for (auto val : single_value)
        {
            cout << val;
        }

        sort(v.begin(), v.end(), greater<char>());
        for (auto val : v)
        {
            if (mp[val] % 2 != 0)
                continue;
            cout << val;
        }
    }

    return 0;
}