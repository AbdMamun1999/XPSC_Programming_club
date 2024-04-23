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
        string a, b;
        cin >> a >> b;

        string sm, sl;
        if (a.size() < b.size())
        {
            sm = a;
            sl = b;
        }
        else
        {
            sm = b;
            sl = a;
        }

        vector<string> str;
        for (int i = 0; i <= sm.size(); i++)
        {
            for (int k = 0; k < sm.size() - i; k++)
            {
                str.push_back(sm.substr(i, k + 1));
            }
        }

        int len = 0;
        int idx = 0;
        for (string sub : str)
        {
            int idx = sl.find(sub);
            int size = sub.size();
            if (idx != -1)
            {
                len = max(len, size);
            }
        }

        cout << (a.size() + b.size()) - (len * 2) << '\n';
    }

    return 0;
}