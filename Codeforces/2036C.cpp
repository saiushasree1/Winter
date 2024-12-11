// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
      string s;
    cin >> s;
    int n = s.size();
    int q;
    cin >> q;
 
    int cnt = 0;
    for (int i = 0; i < n - 3; i++) {
        if (s.substr(i, 4) == "1100")
            cnt++;
    } // n
    while (q--) {
        int i, v;
        cin >> i >> v;
        i--;
        for (int j = i - 3; j < i + 1; j++) {
            if (j < 0 || j + 3 >= n)
                continue;
            if (s.substr(j, 4) == "1100")
                cnt--;
        } // 4
        s[i] = '0' + v;
        for (int j = i - 3; j < i + 1; j++) {
            if (j < 0 || j + 3 >= n)
                continue;
            if (s.substr(j, 4) == "1100")
                cnt++;
        } // 4
        if (cnt > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }        
    }
    return 0;
}
https://codeforces.com/problemset/problem/2036/C
