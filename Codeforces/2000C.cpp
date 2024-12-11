// Online C++ compiler to run C++ program online
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
        int m;
        cin>>m;
        while(m--){
          string s;
          cin>>s;
          if(s.length()!=n){
            cout<<"NO"<<endl;
            continue;
          }
          unordered_map<char,int> x;
          unordered_map<int,char> y;
          bool fl=true;
          for(int i=0;i<n;i++){
            
            if(x.find(s[i])!=x.end()){
              if(x[s[i]]!=a[i]){
                fl=false;
                break;
              }
            }
            else{
              x[s[i]]=a[i];
            }
            
            if(y.find(a[i])!=y.end()){
              if(y[a[i]]!=s[i]){
                fl=false;
                break;
              }
            }
            else{
              y[a[i]]=s[i];
            }
          }
          if(!fl) cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/2000/C
