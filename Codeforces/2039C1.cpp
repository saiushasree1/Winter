#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      long long x;
      long long m;
      cin>>x>>m;
      long long ans=0;
      for(int y=1;y<=min(2*x,m);y++){
        if(x!=y && (x%(x^y)==0||y%(x^y)==0)) ans++;
      }
      cout<<ans<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/2039/C1
