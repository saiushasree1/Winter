// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long dist(int x1, int y1, int x2, int y2) {
    return 1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1);
}
void solve(){
  int n,x,y;
  cin>>n>>x>>y;
  int e;
  if(y%2==1){
    e=1;
  }
  else e=-1;
  for(int i=1;i<=y-1;i++){
    cout<<e<<" ";
    e*=(-1);
  }
  for(int i=y;i<=x;i++){
    cout<<1<<" ";
  }
  e=-1;
  for(int i=x+1;i<=n;i++){
    cout<<e<<" ";
    e*=(-1);
  }
  cout<<endl;
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
https://codeforces.com/problemset/problem/1990/B
