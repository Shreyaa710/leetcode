class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> ans;

        
        for(int i=1;i<intervals.size();i++){
            
            if(intervals[i-1][1] >= intervals[i][0]){
                intervals[i][0]=intervals[i-1][0];
                intervals[i][1]=intervals[i][1]>intervals[i-1][1] ? intervals[i][1] : intervals[i-1][1];
             
            }
            
            else{
                vector<int> temp={intervals[i-1][0], intervals[i-1][1]};
                ans.push_back(temp);
            } 
        }
        
        vector<int> temp={intervals[intervals.size()-1][0], intervals[intervals.size()-1][1]};
        ans.push_back(temp);
        
        return ans;
    }
};


