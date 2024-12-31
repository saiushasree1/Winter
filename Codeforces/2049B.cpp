#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  bool p=false;
  bool si=false;
  if(s[0]=='s') s[0]='.';
  if(s[n-1]=='p')s[n-1]='.';
  for(int i=0;i<n;i++){
    if(s[i]=='p') p=true;
    if(s[i]=='s') si=true;
  }
  if(p && si) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
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
https://codeforces.com/problemset/problem/2049/B
