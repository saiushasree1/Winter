#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    
    int tt; cin >> tt;

    while(tt--) {   
        int n, k, subtract = 0; cin >> n >> k;
        int answer = k;

        vector<int>a(n);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());

        for(int i = 0; i < n; i++) {
            a[i] -= subtract; 
            k -= min(k, (n - i) * a[i]); 

            if(k == 0) break; 
            else answer++; 

            subtract += a[i];
        }

        cout << answer << "\n";
    }
}
https://codeforces.com/problemset/problem/2024/B
