#include <bits/stdc++.h>
using namespace std;
void solve(){
  string s;
        cin >> s;
        vector<int> digits(s.size());
        for (int i = 0; i < s.size(); i++) 
            digits[i] = s[i] - '0';
        
        for (int i = 1; i < s.size(); i++) 
        {
            int copy_i = i;
            while (copy_i >= 1 && digits[copy_i] > 0 && digits[copy_i] > digits[copy_i - 1] + 1) // 10
            {
                int val = digits[copy_i];
                digits[copy_i] = digits[copy_i - 1];
                digits[copy_i - 1] = val - 1;
                if (copy_i > 1)
                    copy_i--;
                else
                    break;
            }
        } 
        string res = "";
        for (int d : digits)
            res += to_string(d);
        cout << res << endl;
  return;
}
int main() 
{
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
https://codeforces.com/problemset/problem/2050/D
