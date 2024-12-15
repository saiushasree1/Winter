// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
     long long a[n];
     vector<int> eve;
     int o=0,e=0;long long maxo=0;
     for(int i=0;i<n;i++){
       cin>>a[i];
       if(a[i]%2==1){
         maxo=max(maxo,a[i]);
         o++;
       }
       else{
         eve.push_back(a[i]);
         e++;
       }
     }
     if(o==0||e==0){
       cout<<0<<endl;return;
     }
     sort(eve.begin(),eve.end());
     int ans=e;
     for(int i=0;i<eve.size();i++){
       if(eve[i]>maxo){
         ans++;
         break;
       }
       maxo+=eve[i];
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
https://codeforces.com/problemset/problem/1993/B
