#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n,t,q;
     cin>>n>>t>>q;
     int a[t],b[q];
     for(int i=0;i<t;i++) cin>>a[i];
     sort(a,a+t);
     for(int i=0;i<q;i++){
       cin>>b[i];
       if(b[i]<a[0]){
         cout<<a[0]-1<<endl;
       }
       else if(b[i]>a[t-1]){
         cout<<n-a[t-1]<<endl;
       }
       else{
         int x=lower_bound(a,a+t,b[i])-a;
         if(x>=t){
           cout<<n-a[t-1]<<endl;
         }
         else if(x==0) cout<<a[0]-1<<endl;
         else cout<<(a[x]-a[x-1])/2<<endl;
       }
     }
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
https://codeforces.com/problemset/problem/2005/B2
