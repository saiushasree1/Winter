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
      for(int i=0;i<n;i++){
        cout<<a[(i+1)%n]<<" ";
      }
      cout<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1998/B
