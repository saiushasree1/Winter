// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
     string s,t;
     cin>>s>>t;
     for(int i=0;i<n && s[i]=='0';i++){
       if(t[i]!='0'){
         cout<<"NO"<<endl;
         return;
       }
     }
     cout<<"YES"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
https://codeforces.com/problemset/problem/1994/B
