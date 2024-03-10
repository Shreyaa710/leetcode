class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string str;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                 if(!st.empty()){
                    str=str+'(';
                }
                  st.push('(');
            }
            else{
                st.pop();
                if(!st.empty()){
                    str=str+')';
                }
            }
        }
        return str;
    }
};