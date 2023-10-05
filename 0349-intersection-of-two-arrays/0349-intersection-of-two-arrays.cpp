class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2= nums2.size();
        unordered_set<int> s1;
        for(int i=0;i<n1;i++){
            s1.insert(nums1[i]);
        }
        unordered_set<int> temp;
        for(int i=0;i<n2;i++)
        {
            if(s1.find(nums2[i]) != s1.end()){
                temp.insert(nums2[i]);
            }
        }
        vector<int> target;
        for (auto &it: temp) {
        target.push_back(it);
        }
        return target;
        
    }
};