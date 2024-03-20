class Solution {
public:
    
    vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	// Write your code here
	stack<int> st;
	vector<int> ans(n,-1);
	bool flag=false;

	st.push(arr[n-1]);
	for(int i=n-2;i>=0;i--){
		if(arr[i]<st.top()) ans[i]=st.top();
		else{
			while(!st.empty() && arr[i]>=st.top()){
				st.pop();
				flag=true;
			}
			if(!st.empty() && flag) {
				ans[i]=st.top();
			}
		}
		st.push(arr[i]);
	}
	return ans;
}
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans= nextGreaterElement(nums2, nums2.size());
        vector<int> res(nums1.size(),-1);
        map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }
        
        for(int i=0;i<nums1.size();i++){
            int ind=mp[nums1[i]];
            res[i]=ans[ind];
        }
        return res;
        
    }
};
