class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]]++;
        }
        
        
        for(auto e: m){
            cout<<e.first<<" "<<e.second<<endl;
        }
        int i=0;
        while(i<ransomNote.length()){
            if(m.find(ransomNote[i]) == m.end()) return false;
            
            else{
                 m[ransomNote[i]]--;
                if(m[ransomNote[i]]==0) m.erase(ransomNote[i]);
        
            }
            i++;
        }
        return true;
        
        
    }
};