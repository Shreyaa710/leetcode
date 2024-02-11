class Solution {
public:
    
    void help(int i,int target,int k,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        if(k==ds.size()){
            if(target==0) ans.push_back(ds);
            
            return;
        }
        
        for(int j=i;j<arr.size();j++){
            if(arr[j]>target) break;
            ds.push_back(arr[j]);
            help(j+1,target-arr[j],k,arr,ans,ds);
            ds.pop_back();
        }
}
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int>ds;
        help(0,n,k,arr,ans,ds);
        return ans;
    }
};