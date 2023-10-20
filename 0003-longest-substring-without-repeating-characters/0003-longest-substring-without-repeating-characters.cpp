class Solution {
public:
    
    int max(int a,int b)
    {
        if(a>b) return a;
        
        else return b;
    }
    
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>se;
        int i=0,j=0;
        int maxi=0;
        while(j<s.length())
        {
            if(se.find(s[j]) == se.end()){
                se.insert(s[j]);
                maxi=max(maxi,se.size());
                j++;
            }
            else{
                se.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};