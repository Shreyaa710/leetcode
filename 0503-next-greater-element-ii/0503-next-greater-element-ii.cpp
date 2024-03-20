class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    stack<int> st;
    int n= nums.size();
	vector<int> ans(n,-1);
	bool flag=false;

	st.push(nums[n-1]);
	for(int i=2*n-2;i>=0;i--){
		if(nums[i%n]<st.top()) ans[i%n]=st.top();
		else{
			while(!st.empty() && nums[i%n]>=st.top()){
				st.pop();
				flag=true;
			}
			if(!st.empty() && flag) {
				ans[i%n]=st.top();
			}
		}
		st.push(nums[i%n]);
	}
	return ans;
    }
};