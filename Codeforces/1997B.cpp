// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<string> v;
     string s;
     cin>>s;
     v.push_back(s);
     cin>>s;
     v.push_back(s);
     int count=0;
     for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]=='.'){
                int temp=0;
                if(j+1<n && v[i][j+1]=='.')temp++;
                if(j-1<n && v[i][j-1]=='.')temp++;;
                if(temp<2)continue;
                if(i==0){
                    if(v[i+1][j]=='.' && v[i+1][j-1]!='.' && v[i+1][j+1]!='.')count++;
                }
                else{
                    if(v[i-1][j]=='.' && v[i-1][j-1]!='.' && v[i-1][j+1]!='.')count++;
                }
            }
        }
    }
     cout<<count<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1997/B
