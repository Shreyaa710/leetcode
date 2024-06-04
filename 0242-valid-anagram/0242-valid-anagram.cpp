class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
//         map<char,int>w;
        
        
        if(s.length() != t.length()) return false;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        
//         for(int i=0;i<t.length();i++){
//             w[t[i]]++;
//         }
        
//         if(m==w) return true;
        
//         return false;
        
        
        
         for(int i=0;i<t.length();i++){
            m[t[i]]--;
             if(m[t[i]]==0) m.erase(t[i]);
        }
        
        if(m.size()==0) return true;
        
        return false;
    }
};