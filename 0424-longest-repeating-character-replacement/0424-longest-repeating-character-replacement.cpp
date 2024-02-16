class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        unordered_map<char,int> freq;
        int maxLength=0,maxF=0,start=0,end=0;
        
        for(end=0;end<n;end++){
            freq[s[end]]++;
            maxF=max(maxF,freq[s[end]]);
            
            //length of sub str
            while((end-start+1)-maxF>k){
                freq[s[start]]--;
                start++;
            }
            
            maxLength=max(maxLength,(end-start+1));
        }
        
        return maxLength;
    }
};