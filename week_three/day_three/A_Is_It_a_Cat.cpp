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

        string newS;
        for (char ch : s)
        {
            if (ch >= 'a' && ch <= 'z')
                newS += ch;
            else if (ch >= 'A' && ch <= 'Z')
            {
                char x = ch + 32;
                newS += x;
            }
        }

        string newSS;
        newSS += newS[0];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (newS[i] == newSS[j])
                continue;
            else if (newS[i] != newSS[j])
            {
                // cout << newS[i] << " " << newSS[j] << endl;
                newSS += newS[i];
                j++;
            }
        }

        if (newSS == "meow")
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

        // cout << newSS << '\n';
    }

    return 0;
}