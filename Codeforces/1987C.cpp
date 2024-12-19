// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long dist(int x1, int y1, int x2, int y2) {
    return 1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1);
}
void solve(){
  int n;
  cin>>n;
  long long a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  long long ans=a[n-1];
  for(int i=n-2;i>=0;i--){
    ans=max(ans+1,a[i]);
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
https://codeforces.com/problemset/problem/1987/C
