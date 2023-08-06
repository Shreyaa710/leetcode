class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
//         if(k>nums.size()){
//             k=(k%nums.size());
//         }
     k=k%nums.size();
        vector<int>temp;
        int index=nums.size()-k;
        for(int i=0;i<k;i++)
        {
            temp.push_back(nums[index++]);
        }
        
        for(int i=nums.size()-k-1;i>=0;i--)
        {
            nums[i+k]=nums[i];
        }
        
        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }
    }
};
