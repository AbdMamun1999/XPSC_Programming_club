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
        int res = 0;
        for (char ch : s)
        {
            if (!st.empty())
            {
                if (st.top() != ch)
                {
                    res++;
                    st.pop();
                }
                else
                    st.push(ch);
            }
            else
            {
                st.push(ch);
            }
        }

        if (res % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }

    return 0;
}