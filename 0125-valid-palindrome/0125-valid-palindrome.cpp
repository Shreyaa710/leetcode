class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ch;
       
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i] <='z' || s[i]>='0' && s[i]<='9'){
                ch.push_back(s[i]);
            }
            
            if(s[i]>='A' && s[i]<='Z'){
                ch.push_back(' '+s[i]);
            }
        }
        
        int j=ch.size()-1;
        int i=0;
        
        for(int i=0;i<ch.size();i++)
        {
            cout<<ch[i];
        }
        
        while(i<j)
        {
            if(ch[i] != ch[j]) return false;
            
            i++;
            j--;
        }
        return true;
    
    }
};