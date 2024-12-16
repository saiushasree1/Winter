#include <bits/stdc++.h>
using namespace std;
void solve(){
  string s;
      cin>>s;
      int n2=0;
      int n3=0;
      long long tot=0;
      for(int i=0;i<s.length();i++){
        if(s[i]=='2') n2++;
        if(s[i]=='3') n3++;
        tot+=(s[i]-'0');
      }
      int x=tot%9;
      if(x==0){
        cout<<"YES"<<endl;
        return;
      }
      for(int i=0;i<=n2;i++){
        for(int j=0;j<=n3;j++){
          int newi=x+i*2+j*6;
          if(newi%9==0){
            cout<<"YES"<<endl;
            return;
          }
        }
      }
      cout<<"NO"<<endl;
      return;
}
int main() {
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
https://codeforces.com/problemset/problem/2050/C
