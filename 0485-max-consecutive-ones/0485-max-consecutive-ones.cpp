class Solution {
public:
int max(int r,int s){
    if(r>s){
        return r;
    }
    return s;
}
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int res=0;
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        count=0;
        else{
            count++;
            res =max(res,count);
        }
    }
    return res;
    }
};
