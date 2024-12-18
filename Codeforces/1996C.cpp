// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long dist(int x1, int y1, int x2, int y2) {
    return 1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1);
}
void solve(){
  int n,q;
  cin>>n>>q;
  string a,b;
  cin>>a>>b;
  vector<vector<int>> prf(n+1,vector<int>(26,0));
  vector<vector<int>> pf(n+1,vector<int>(26,0));
  
  for(int i=0;i<n;i++){
    prf[i+1]=prf[i];
    prf[i+1][a[i]-'a']++;
    pf[i+1]=pf[i];
    pf[i+1][b[i]-'a']++;
  }
  for(int i=0;i<q;i++){
    int l,r;
    cin>>l>>r;
    long long ans=0;
    for(int j=0;j<26;j++){
      ans+=abs(prf[r][j]-prf[l-1][j]-(pf[r][j]-pf[l-1][j]));
    }
    cout<<ans/2<<endl;
  }
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
https://codeforces.com/problemset/problem/1996/C
