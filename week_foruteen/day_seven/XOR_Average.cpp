#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
    cin >> n;
    if(n%2!=0){
        for (int i = 1; i <= n; i++)
        {
            cout << 1 <<' ';
        }
        
    }else{
        cout << "1 3" << " ";
        for (int i = 2; i < n; i++)
        {
            cout << 2 << ' ';
        }
    }
    cout << '\n';
    }
    

    return 0;
}