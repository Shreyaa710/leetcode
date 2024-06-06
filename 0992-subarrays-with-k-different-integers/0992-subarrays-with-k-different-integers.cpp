class Solution {
public:
    int atMost(vector<int>& arr, int k)
    {
        unordered_map<int,int> mp;
        int count=0;
        int i=0,j=0;
        while(i<arr.size())
        {
            mp[arr[i]]++;
            while(mp.size()>k)
            {
                mp[arr[j]]--;
                if(mp[arr[j]]==0) mp.erase(arr[j]);
                j++;
            }
            
            count+=(i-j+1);
            i++;
        }
        return count;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};