class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // unordered_map<int, int> arr;
        // for(int i=0;i<nums.size();i++) arr[nums[i]]++;
        // vector<int> a;
        // for(auto e:arr) {
        //     if(e.second>1) {
        //         a.push_back(e.first);
        //         a.push_back(e.first);
        //     }
        //     else{
        //         a.push_back(e.first);
        //     }
        // }
        // sort(a.begin(), a.end()) ;
        // for(int i=0;i<a.size();i++) {
        //     nums[i] = a[i];
        // }
        // return a.size() ;
        
        map <int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int j=0;
        for(auto it: m){
          if(it.second>=2){
                nums[j++] = it.first;
                nums[j++] = it.first;
          }
            else nums[j++]=it.first;
            
        }
        return j;
    }
};