#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool is_br = false;
    cout << v[0];
    for (int i = 1; i < n; i++)
    {

        if (is_br == false)
        {
            if (v[i] >= v[i - 1])
            {
                cout << v[i];
            }
            else if (v[i] < v[i - 1])
            {
                if (v[0]>=v[i])
                {
                    // cout << 1;
                    cout << v[i];
                    is_br = true;
                }
            }
        }else{
            if( v[i] <= v[0]){
                cout << v[i];
            }else if(v[i] >= v[i-1] && v[i] >= v[0]){
                cout << v[i];
            }
        }
    }

    return 0;
}