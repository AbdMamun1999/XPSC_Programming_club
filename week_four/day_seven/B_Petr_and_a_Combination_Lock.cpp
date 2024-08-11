#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    vector<int>arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = 0;
    int b = (1 << n);

    for (int i = 0; i < b; i++)
    {
        int sum = 0;
        for (int bits = 0; bits < n; bits++)
        {
            if(i&(1 << bits)) sum+=arr[bits];
            else sum-=arr[bits];
        }

        if(sum%360==0){
            flag = 1;
            break;
        }
        
    }

    if(flag==1) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    
    return 0;
}