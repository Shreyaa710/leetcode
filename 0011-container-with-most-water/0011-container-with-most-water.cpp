class Solution {
public:
    int maxArea(vector<int>& height) {
        long i=0,j=height.size()-1;
        long area=0;
        while(i<j){
  
            area=max(area,(j-i)*(min(height[i],height[j])));
            
            if(height[i]>height[j]) j--;
            
            else i++;
        }
        return area;
        
    }
};