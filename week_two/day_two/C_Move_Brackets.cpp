/*https://codeforces.com/problemset/problem/1374/C*/
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

        stack<char> st;
        for (char ch : s)
        {
            if (ch == '(')
            {
                st.push(ch);
            }
            else
            {
                if (st.empty())
                    continue;
                else if (ch == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else
                    continue;
            }
        }

        cout << st.size() << '\n';
    }

    return 0;
}