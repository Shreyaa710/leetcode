class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i=0,j=numbers.size()-1;
        while(j>i)
        {
            if(numbers[i] + numbers[j] > target)
            {
                j--;
            }
            else if(numbers[i] + numbers[j] < target)
            {
                i++;
            }
            else
            {
                // cout<<i+1<<"  "<<j+1;
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }
        return ans;
    }
};
