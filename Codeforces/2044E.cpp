#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     long long k,l1,r1,l2,r2;
     cin>>k>>l1>>r1>>l2>>r2;
     long long ans=0;
     long long mul=1;
     while(mul<=1e9){
       
       ans+=max(0LL,(min(r2/mul,r1)-max((l2+mul-1)/mul,l1))+1);
       mul=mul*k;
     }
     cout<<ans<<endl;
    }
    return 0;
}
https://codeforces.com/contest/2044/problem/E
