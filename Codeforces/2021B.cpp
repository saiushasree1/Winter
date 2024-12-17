#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,x;
     cin>>n>>x;
     int a[n];
     int maxi=0;
     unordered_map<int,int> m;
     for(int i=0;i<n;i++){
       cin>>a[i];
       m[a[i]]++;
       maxi=max(maxi,a[i]);
     }
     
     for(int i=0;i<=n;i++){
       if(m[i]==0 && i<x){
         cout<<i<<endl;
         return;
       }
       else if(m[i]==0){
         cout<<i<<endl;
         return;
       }
       else{
         int xi=x;
         while(m[i]>=2){
           m[i]--;
           m[i+xi]++;
           xi+=x;
         }
       }
     }
     cout<<maxi+1<<endl;
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
https://codeforces.com/problemset/problem/2021/B
