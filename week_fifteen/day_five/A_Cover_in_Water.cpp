#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0, ac = 0;
        for (char ch : s)
        {
            if (ch == '.')
            {
                cnt++;
                ac++;
            }
            else
                cnt = 0;
            if (cnt > 2)
                break;
        }
 
        if (cnt >= 3)
            cout << 2 << endl;
        else
            cout << ac << endl;
    }
 
    return 0;
}