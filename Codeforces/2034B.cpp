// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        int ans=0,cnt=0;
        for(int i=0;i<n;i++){
          if(s[i]=='1')cnt=0;
          else{
            cnt++;
            if(cnt==m){
              ans++;
              cnt=0;
              i=i+k-1;
            }
          }
        }
        cout<<ans<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/2034/B
