class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> v('z'+1,{0,0});
        
        for(auto c:s)
        {
            v[c]={v[c].first+1,c};
        }
        
        sort(v.begin(), v.end());
        
        string res="";
        for(auto p:v)
        {
            res= string(p.first, p.second)+res;
        }
        
        return res;
    }
};
