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
        char a_back = a.back(), b_back = b.back();

        if (a_back == b_back)
        {
            if (a_back == 'S' && b_back == 'S')
            {
                if (a.size() == b.size())
                    cout << '=' << '\n';
                else if (a.size() > b.size())
                    cout << '<' << '\n';
                else
                    cout << '>' << '\n';
            }
            else
            {
                if (a.size() == b.size())
                    cout << '=' << '\n';
                else if (a.size() < b.size())
                    cout << '<' << '\n';
                else
                    cout << '>' << '\n';
            }
        }
        else if (a_back > b_back)
            cout << '<' << '\n';
        else
            cout << '>' << '\n';
    }

    return 0;
}