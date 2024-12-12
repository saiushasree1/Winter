// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s,r;
      cin>>s>>r;
      int co=0,cz=0;
      for(int i=0;i<n;i++){
        if(s[i]=='1') co++;
        else cz++;
      }
      if(cz==0 || co==0) cout<<"NO"<<endl;
      else{
        bool f=true;
        for(int i=0;i<n-1;i++){
          if(cz==0||co==0){
            f=false;
            break;
          }
          cz--;
          co--;
          if(r[i]=='1') co++;
          else cz++;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }
    }
    return 0;
}
https://codeforces.com/problemset/problem/2029/B
