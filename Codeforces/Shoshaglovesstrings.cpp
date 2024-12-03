// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()<=1 || (s.length()==2 && s[0]!=s[1])) cout<<-1<<endl;
        else if(s.length()==2 && s[0]==s[1]) cout<<s<<endl;
        else{
            bool fl=false;
            for(int i=0;i<s.length()-2;i++){
                if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i]!=s[i+2]){
                    fl=true;
                    cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
                    break;
                }
                else if(s[i]==s[i+1]){ 
                    fl=true;
                    cout<<s[i]<<s[i+1]<<endl;
                    break;
                }
            }
            int n=s.length();
            if(!fl && s[s.length()-1]==s[s.length()-2]){
              cout<<s[n-2]<<s[n-1]<<endl;
              fl=true;
            }
            if(!fl) cout<<-1<<endl;
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/2039/B
