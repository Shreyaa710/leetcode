class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        vector<int> suff(n);
        
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i];
        }
        
        suff[n-1]=nums[n-1];
        
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]*nums[i];
        }
        
       
        vector<int> mul(n);
        for(int i=0;i<n;i++){
            int a=1,b=1;
            if(i>=1){
                a=pre[i-1];
            }
            if(i<nums.size()-1){
                b=suff[i+1];
            }
            mul[i]=a*b;
        }
        
        return mul;
    }
};