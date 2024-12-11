// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      if(n==k && k==1) cout<<1<<endl<<1<<endl;
      else if(n==k || k==1){
        cout<<-1<<endl;
      }
      else{
        cout<<3<<endl;
        if((k-1)%2==0){
          cout<<1<<" "<<k-1<<" "<<k+2<<endl;
        }
        else{
          cout<<1<<" "<<k<<" "<<k+1<<endl;
        }
      }
    }
    return 0;
}
https://codeforces.com/problemset/problem/2032/B
