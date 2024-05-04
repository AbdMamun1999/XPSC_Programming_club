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
        string s;
        cin >> s;
        reverse(s.begin(), s.end());

        vector<char> v;
        int cap_flag = 0, sma_flag = 0;
        for (char ch : s)
        {
            if (ch == 'B')
            {
                cap_flag++;
            }
            else if (ch != 'B' && cap_flag > 0)
            {
                if (ch >= 'A' && ch <= 'Z')
                {
                    cap_flag--;
                    continue;
                }
            }
            else if (ch != 'b' && ch != 'B' && !cap_flag)
            {
                if (ch >= 'A' && ch <= 'Z')
                {
                    v.push_back(ch);
                    cap_flag = false;
                }
            }

            if (ch == 'b')
            {
                sma_flag++;
            }
            else if (ch != 'b' && sma_flag > 0)
            {
                if (ch >= 'a' && ch <= 'z')
                {
                    sma_flag--;
                    continue;
                }
            }
            else if (ch != 'b' && ch != 'B' && sma_flag == 0)
                if (ch >= 'a' && ch <= 'z')
                {
                    v.push_back(ch);
                    sma_flag = false;
                }
        }

        reverse(v.begin(), v.end());
        for (char ch : v)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}