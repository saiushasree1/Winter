// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=4) cout<<-1<<endl;
        else{
          for(int i=2;i<=n;i+=2){
            if(i!=4){
              cout<<i<<" "; 
            }
          }
          cout<<4<<" "<<5<<" ";
          for(int i=1;i<=n;i+=2){
            if(i!=5) cout<<i<<" ";
          }
          cout<<endl;
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/2037/C
