#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      long long w,b;
      cin>>w>>b;
      long long k=sqrtl(2*(w+b));
      while((!(k*(k+1)<=2*(w+b) && max(w,b)>=k))&&k!=0){
        k--;
      }
      cout<<k<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/2041/B
