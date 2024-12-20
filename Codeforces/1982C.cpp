// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long dist(int x1, int y1, int x2, int y2) {
    return 1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1);
}
void solve(){
  int n,l,r;
  cin>>n>>l>>r;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int cur=0,i=0,j=0;
  int count=0;
  while(i<n){
    while(j<n && cur<l){
      cur+=a[j];
      j++;
    }
    if(l<=cur && cur<=r){
      cur=0;
      count++;
      i=j;
    }
    else{
      cur-=a[i];
      i++;
    }
  }
  cout<<count<<endl;
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
https://codeforces.com/problemset/problem/1982/C
