// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     string s,t;
     cin>>s>>t;
     if(t.length()>s.length()) cout<<"NO"<<endl;
     else{
       int j=0,i=0;
       for( i=0;i<s.length()&&j<t.length();i++){
         if(s[i]==t[j]) j++;
         else if(s[i]=='?'){
           s[i]=t[j];
           j++;
         }
       }
       while(i<s.length()){
         if(s[i]=='?') s[i]='a';
         i++;
       }
       if(j==t.length()) {cout<<"YES"<<endl;cout<<s<<endl;}
       else cout<<"NO"<<endl;
     }
    }
    return 0;
}
https://codeforces.com/problemset/problem/1999/D
