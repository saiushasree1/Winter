#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        bool rev=true;
        bool cor=true;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
          cin>>b[i];
          if(a[i]!=b[i]) cor=false;
          if(a[n-1-i]!=b[i]) rev=false;
        }
        if(cor||rev) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
        
    }
    return 0;
}
https://codeforces.com/problemset/problem/2002/B
