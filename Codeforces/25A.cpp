#include <bits/stdc++.h>
using namespace std;
void solve(){
  int odi=-1,evi=-1;
  int odc=0,evc=0;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2){
      odc++;
      odi=i+1;
    }
    else{
      evc++;
      evi=i+1;
    }
  }
  if(odc==1){
    cout<<odi<<endl;
  }
  else cout<<evi<<endl;
}
int main() 
{
      solve();
    
    return 0;
}
https://codeforces.com/problemset/problem/25/A
