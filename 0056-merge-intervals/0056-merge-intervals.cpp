// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(),intervals.end());
        
//         vector<vector<int>> ans;
//         bool flag=false;
        
//         for(int i=1;i<intervals.size();i++){
            
//             if(intervals[i-1][1] >= intervals[i][0]){
//                 intervals[i][0]=intervals[i-1][0];
//                 intervals[i][1]=intervals[i][1]>intervals[i-1][1] ? intervals[i][1] : intervals[i-1][1];
                    
//                 flag= true;
//             }
            
//             else{
//                 flag=false;
//                 vector<int> temp;
//                 temp.push_back(intervals[i-1][0]);
//                 temp.push_back(intervals[i-1][1]);
                
//                 ans.push_back(temp);
//             } 
//         }
        
//         vector<int> temp;
//         temp.push_back(intervals[intervals.size()-1][0]);
//         temp.push_back(intervals[intervals.size()-1][1]);
        
//         ans.push_back(temp);
        
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        
        for (const auto& interval : intervals) {
            if (ans.empty() || ans.back()[1] < interval[0]) {
                ans.push_back(interval);
            } else {
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
        }
        
        return ans;
    }
};
