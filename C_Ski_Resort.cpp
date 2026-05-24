#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n,k,q;
        cin >> n >> k >> q;
        long long ans = 0;
        int wid_len = 0; 
        for(int i=0; i<n; i++) 
        {
            int x;
            cin >> x;
            if(x <= q) 
            {
                wid_len++;  
                if(wid_len >= k) 
                {
            
                    ans += wid_len-k+1;
                }
            } 
            else 
            {
                wid_len = 0; 
            }
        }
        cout << ans << endl;
    }
    return 0;
}