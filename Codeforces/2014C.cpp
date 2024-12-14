// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     long long a[n];
     long long tot=0;
     for(int i=0;i<n;i++){
        cin>>a[i];
        tot+=a[i];
     }
     sort(a,a+n);
     if(n==1 || n==2) cout<<-1<<endl;
     else{
       int at=n/2;
       if(2*a[at]*n<tot){
         cout<<0<<endl;
       }
       else{
         if((double)(2*a[at]*n-tot)/n + (double)tot/n<=2*a[at])
         cout<<(2*a[at]*n-tot)+1<<endl;
         else cout<<(2*a[at]*n-tot)<<endl;
       }
     }
    }
    return 0;
}
https://codeforces.com/problemset/problem/2014/C
