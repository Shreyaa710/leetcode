// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//        map<char,int> s1;
//        map<char,int> t1;
        
//         if(s.length() != t.length()) return false;
        
//         for(int i=0;i<s.length();i++){
//             s1[s[i]]++;
//         }
        
//          for(int i=0;i<t.length();i++){
//             t1[t[i]]++;
//         }
        
//         string res1,res2;
        
//         for(auto e:s1){
//             res1+=to_string(e.second);
//         }
//         cout<<res1<<endl;
        
//         for(auto e:t1){
//             res2+=to_string(e.second);
//         }
//         cout<<res2;
        
//         if(res1.compare(res2)==0) return true;
   
        
//         return false;
   
//     }
        
        class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map_s[256] = { 0 };
        int map_t[256] = { 0 };
        int len = s.size();
        for (int i = 0; i < len; ++i)
        {
            if (map_s[s[i]]!=map_t[t[i]]) return false;
            map_s[s[i]] = i+1;
            map_t[t[i]] = i+1;
        }
        return true; 
    }
};
