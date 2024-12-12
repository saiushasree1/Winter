#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int b=0;
      for(int i=0;i<n;i++){
        int c=0;
        for(int j=i;j<n;j++){
          if(a[j]<=a[i]) c++;
        }
        b=max(b,c);
      }
      cout<<n-b<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/2027/B
