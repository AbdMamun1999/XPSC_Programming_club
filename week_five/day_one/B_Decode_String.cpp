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
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                i -= 2;
                string s1 = s.substr(i, 2);
                int num = stoi(s1);
                newS += char(num + 96);
            }
            else
            {
                int num = s[i] - '0' + 96;
                newS += char(num);
            }
        }

        reverse(newS.begin(), newS.end());
        cout << newS << '\n';
    }

    return 0;
}