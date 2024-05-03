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
        int cnt_1 = 0, cnt_0 = 0;
        for (char ch : s)
        {
            if (ch == '1')
                cnt_1++;
            else
                cnt_0++;
        }

        for (char ch : s)
        {

            if (ch == '1')
            {
                if (cnt_0 == 0)
                {
                    break;
                }
                cnt_0--;
            }
            if (ch == '0')
            {
                if (cnt_1 == 0)
                {
                    break;
                }
                cnt_1--;
            }
        }

        cout << cnt_0 + cnt_1 << '\n';
    }

    return 0;
}