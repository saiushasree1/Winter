// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     long long n,m;
     cin>>n>>m;
     long long a[n];
     map<long long ,long long> ma;
     for(int i=0;i<n;i++){
       cin>>a[i];
       ma[a[i]]++;
     }
     vector<pair<long long,long long>> v;
     for(auto [i,x]:ma){
       v.push_back({i,x});
     }
     long long maxi=0;
     for(int i=0;i<v.size();i++){
       long long ans=min(v[i].second,m/v[i].first)*v[i].first;
       maxi=max(ans,maxi);
       if(i + 1<v.size() && v[i + 1].first==v[i].first + 1){
         for(int j=1;j<=min(v[i].second,m/v[i].first);j++){
           long long rem=m-j*v[i].first;
           ans=min(rem/(v[i].first + 1),v[i+1].second)*v[i+1].first+j*v[i].first;
           maxi=max(maxi,ans);
         }
       }
     }
     cout<<maxi<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1995/B1
