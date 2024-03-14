class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int count=0;
        int i=0,j=0;
        unordered_map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            while(mp['a'] && mp['b'] && mp['c']){
                count+=n-j;
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        return count;
    }
};