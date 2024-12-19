// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long dist(int x1, int y1, int x2, int y2) {
    return 1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1);
}
void solve(){
  string a,b;
  cin>>a>>b;
  int n=a.length(),m=b.length();
  int ans=0;
  for(int i=0;i<m;i++){
    int temp=0;
    int j=0;
    int k=i;
    while(j<n && k<m){
      if(a[j]==b[k]){
        k++;
      }
      j++;
    }
    ans=max(ans,k-i);
  }
  cout<<n+m-ans<<endl;
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
https://codeforces.com/problemset/problem/1989/B
