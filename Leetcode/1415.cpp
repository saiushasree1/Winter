class Solution {
public:
    string getHappyString(int n, int k) {
        vector<char> ar={'a','b','c'};
        if(n==1 && k>3) return "";
        string s="";
        int tot=(1<<(n-1));
        if(k>3*tot) return "";
        while(tot>0){
            int r=(k+tot-1)/tot;
            s+=ar[r-1];
            k-=((r-1)*tot);
            tot/=2;
            if(ar[r-1]=='a'){
               ar={'b','c'};
            }
            else if(ar[r-1]=='c'){
                ar={'a','b'};
            }
            else ar={'a','c'};
            
        }
        return s;
    }
};
https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/?envType=daily-question&envId=2025-02-19
