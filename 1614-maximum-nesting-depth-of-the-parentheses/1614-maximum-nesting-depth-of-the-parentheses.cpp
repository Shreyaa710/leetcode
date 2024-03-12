class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count=0,res=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push('(');
                count++;
                res=max(res,count);
            }
            
            else if(s[i]==')'){
                st.pop();
                count--;
                
             
            }
        }
        return res;
    }
};