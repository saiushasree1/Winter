#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int> a,b;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        b.push_back(x);
	    }
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        v.push_back(b[i]*a[i]);
	    }
	    sort(v.begin(),v.end(),greater<int>());
	    long long cost=0;
	    bool f=false;
	    for(int i=0;i<n;i++){
	       cost+=v[i];
	       if(cost>=x){
	           cout<<i+1<<endl;
	           f=true;
	           break;
	       }
	    }
	   if(!f) cout<<-1<<endl;
	    
	}

}
https://www.codechef.com/problems/MINBUY
