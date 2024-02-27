class Solution {
public:
    
    int maximumNonAdjacentSum(vector<int> &nums){
    //Write your code here.
    int n=nums.size();
    vector<int> dp(n,0);
    long long prev=nums[0];
    long long prev2=0;
    for(int i=1;i<n;i++){
        long long take=nums[i];
        if(i>1) take+=prev2;

        long long notTake=0+prev;

        long long curi=max(take,notTake);
        prev2=prev;
        prev=curi;
    }
    return prev;

}
    
    int rob(vector<int>& nums) {
    vector<int> temp1;
    vector<int> temp2;
    int n=nums.size();

    if(n==1) return nums[0];

    for(int i=0;i<n;i++){
        if(i!=0) temp1.push_back(nums[i]);
        if(i!=n-1) temp2.push_back(nums[i]);
    }

    return max(maximumNonAdjacentSum(temp1),maximumNonAdjacentSum(temp2));
    }
};