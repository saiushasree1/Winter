// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     double x,y,k;
     cin>>x>>y>>k;
     if(x==0 && y==0) cout<<0<<endl;
     else if(ceil(x/k)>ceil(y/k)){
       cout<<2*((int)ceil(x/k))-1<<endl;
     }
     else{
       cout<<2*((int)ceil(y/k))<<endl;
     }
    }
    return 0;
}
https://codeforces.com/problemset/problem/2009/C
