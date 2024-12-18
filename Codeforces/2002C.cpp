// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long dist(int x1, int y1, int x2, int y2) {
    return 1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1);
}
void solve(){
  int n;
  cin>>n;
  set<pair<int,int>> m;
  for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    m.insert({x,y});
  }
  int xs,ys,xd,yd;
  cin>>xs>>ys>>xd>>yd;
  if(xs==xd && ys==yd) {cout<<"YES"<<endl;return;}
  int xdiff=abs(xs-xd),ydiff=abs(ys-yd);
  for(auto i:m){
    if(dist(xd,yd,i.first,i.second)<=dist(xd,yd,xs,ys)){
      cout<<"NO"<<endl;
      return;
    }
  }
  cout<<"YES"<<endl;
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
https://codeforces.com/problemset/problem/2002/C
