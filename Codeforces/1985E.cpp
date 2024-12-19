// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long dist(int x1, int y1, int x2, int y2) {
    return 1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1);
}
void solve(){
  long long x,y,z,k;
  cin>>x>>y>>z>>k;
  long long ans=0;
  for(int i=1;i<=x;i++){
    for(int j=1;j<=y;j++){
      if(k%(i*j)==0){
        long long l=k/(i*j);
        long long s=(x-i+1)*(y-j+1)*(z-l+1);
        ans=max(ans,s);
      }
    }
  }
  cout<<ans<<endl;
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
https://codeforces.com/problemset/problem/1985/E
