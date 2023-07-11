class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      
        int n=nums.size();
        if(n>k && k!=0){
            int temp[k],j=0;
        for(int i=n-k;i<n;i++)
        {
            temp[j++]=nums[i];
        }
        for(int i=n-k-1;i>=0;i--)
        {
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }
        }
        else if(n==k || k==0){
            for(int i=0;i<n;i++){
                nums[i];
            }
        }
        else{
            int another[n],front;
            for(int i=0;i<n;i++){
                another[i]=nums[i];
            }
            for(int i=0;i<n;i++){
                front=i;
                for(int j=1;j<=k;j++){
                    front=(i+j)%n;
                }
                nums[front]=another[i];
            }
        }
    }
};