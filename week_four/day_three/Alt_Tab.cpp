#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    vector<string> newS;
    map<string, bool> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!mp.count(s[i]))
        {
            newS.push_back(s[i]);
            mp[s[i]] = true;
        }
    }

    string newSt;
    for (string val : newS)
    {
        newSt += val.substr(val.size() - 2);
    }

    cout << newSt << '\n';
    return 0;
}