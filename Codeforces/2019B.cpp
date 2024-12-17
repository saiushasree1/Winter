#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n,q;
     cin>>n>>q;
     int a[n];
     unordered_map<long long,long long> m;
     for(int i=0;i<n;i++){
       cin>>a[i];
      long long temp=(i+1)*(n-i)-1;
        m[temp]++;
        
        if(i>0){
            long long temp2=(n-i)*i;
            m[temp2]+=(a[i]-a[i-1]-1);
        }
     }
     long long b[q];
     for(int i=0;i<q;i++){
       cin>>b[i];
       cout<<m[b[i]]<<" ";
     }
     cout<<endl;
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
https://codeforces.com/problemset/problem/2019/B
