#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int count = 2;
        while (count<=x)
        {
            count*=2;
        }

        int dif = count-x;
        cout << x-dif << '\n';
    
    }
    

    return 0;
}