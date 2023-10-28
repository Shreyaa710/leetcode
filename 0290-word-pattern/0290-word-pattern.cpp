class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char,string>m1;
        unordered_map<string,char>m2;
        
        vector<string> vec;
        
        string word = "";
            for (auto x : s) 
                {
                    if (x == ' ')
                        {
                            vec.push_back(word);
                            word = "";
                        }
                    else {
                            word = word + x;
                         }
                }
            vec.push_back(word);
        
        if(vec.size() != pattern.length()) return false;

        
        for(int i=0;i<pattern.length();i++){
            if((m1.find(pattern[i]) == m1.end()) && (m2.find(vec[i]) == m2.end())){
                m1[pattern[i]]=vec[i];
                m2[vec[i]]=pattern[i];
            }
            else{
                if(vec[i]!=m1[pattern[i]] || m2[vec[i]] != pattern[i] ) return false;
            }
        }
        //  for(auto e:m1){
        //     cout<<e.first<<" "<<e.second<<endl;
        // }
        
        
        return true;
    }
};