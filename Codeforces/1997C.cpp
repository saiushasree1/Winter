// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int count=0;
     stack<int> st;
     st.push(1);
     for(int i=1;i<n;i++){
       if(s[i]==')'){
         int x=st.top();
         st.pop();
         count+=(i+1-x);
       }
       else if(s[i]=='('){
         st.push(i+1);
       }
       else{
         if(!st.empty()){
           int x=st.top();
           st.pop();
           count+=(i+1-x);
         }
         else{
           st.push(i+1);
         }
       }
     }
     cout<<count<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1997/C
