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
     for(int i=0;i<n;i++) cin>>a[i];
     string s;
     cin>>s;
     int b[n+1]={0};
     bool vis[n+1]={false};
     for(int i=1;i<=n;i++){
       int c=0;
       if(!vis[i]){
         int z=i;
         while(!vis[z]){
           vis[z]=true;
           if(s[z-1]=='0') c++;
           z=a[z-1];
         }
         z=i;
         do{
           b[z]=c;
           z=a[z-1];
         }while(i!=z);
       }
     }
     for(int i=1;i<=n;i++){
       cout<<b[i]<<" ";
     }
     cout<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/2008/D
