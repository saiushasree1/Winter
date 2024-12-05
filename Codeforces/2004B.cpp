// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int l,r,li,ri;
        cin>>l>>r;
        cin>>li>>ri;
        if(l>li){
            swap(l,li);
            swap(r,ri);
        }
          int c=0;
          if(li==l) c++;
          if(r==ri) c++;
          if(r<li){
            cout<<1<<endl;
          }
          else{
            cout<<min(r,ri)-li+2-c<<endl;
          }
    }
    return 0;
}
https://codeforces.com/problemset/problem/2004/B
