class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1= s.length();
        int n2= t.length();
        int i=0,j=0;
        if(n1==0) return true;
        while(i<n2){
            if(s[j]==t[i]) j++;
            
            if(j==n1) return true;
            
            i++;
        }
        return false;
    }
};