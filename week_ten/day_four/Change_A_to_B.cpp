#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int tem = b;
        int cnt = 0;
        while (tem > a)
        {
            if (tem % k == 0 && tem / k >= a)
                tem /= k, cnt++;
            else
            {
                if ((tem / k) < a)
                {
                    cnt += (tem - a);
                    tem -= (tem - a);
                }
                else
                    cnt += (tem % k), tem -= (tem % k);
                if (tem <= a)
                    break;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}