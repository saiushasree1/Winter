// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long dist(int x1, int y1, int x2, int y2) {
    return 1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1);
}
void solve(){
  int n;
  cin>>n;
  int a[n];
  long long p[n+1];
  p[0]=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    p[i+1]=p[i]+a[i];
  
  }
  string s;
  cin>>s;
  queue<int> q;
  stack<int> st;
  for(int i=0;i<s.length();i++){
    if(s[i]=='L') q.push(i);
    else st.push(i);
  }
  long long ans=0;
  while(!q.empty() && !st.empty()){
    int l=q.front();
    q.pop();
    int r=st.top();
    st.pop();
    if(l<r)
    ans+=(p[r+1]-p[l]);
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
https://codeforces.com/problemset/problem/2000/D
