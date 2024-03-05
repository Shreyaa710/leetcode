class Solution {
public:
    
    void help(int i,string ds,int s,int e,vector<string>&ans,int n){
        if(i==2*n){
            ans.push_back(ds);
            return;
        }
        
        if(s<n){
            ds+='(';
            help(i+1,ds,s+1,e,ans,n);
            ds.pop_back();
        }
        
        if(e<s){
            ds+=')';
            help(i+1,ds,s,e+1,ans,n);
            ds.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        help(0,"",0,0,ans,n);
        return ans;
    }
};