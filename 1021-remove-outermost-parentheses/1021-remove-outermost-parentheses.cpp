class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('){
                if(!st.empty()){
                    str+=s[i];
                }
                st.push(s[i]);
            }
            else{
                st.pop();
                if(!st.empty()) str+=s[i];
            }
        }
        return str;
    }
};