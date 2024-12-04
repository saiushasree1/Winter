#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    long long c=0;
	    int mod=0;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        c+=floor((double)x/k);
	        if(x%k==0){
	            mod++;
	        }
	    }
	    if(c>0) cout<<"NO"<<endl;
	    else if(abs(c)<=n-mod){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}

}
https://www.codechef.com/problems/NICEARRAY
