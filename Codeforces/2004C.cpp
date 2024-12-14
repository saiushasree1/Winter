// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
     int a[n];
     long long tot=0,ans=0;
     for(int i=0;i<n;i++){ cin>>a[i];tot+=a[i];}
     sort(a,a+n,greater<int>());
      for(int i=1;i<n;i+=2){
        if(a[i-1]-a[i]<=k){
          k-=(a[i-1]-a[i]);
          ans+=a[i-1];
          tot-=a[i];
        }
        else{
          ans+=a[i]+k;
          tot-=a[i];
          k=0;
        }
      }
      cout<<tot-ans<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/2004/C
