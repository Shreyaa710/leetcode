class Solution {
public:
    int maxArea(vector<int>& height) {
        long i=0,j=height.size()-1;
        long area=0,val=0;
        while(i<j){
            val=min(height[i],height[j]);
            area=max(area,(j-i)*val);
            if(height[i]>height[j]) j--;
            
            else i++;
        }
        return area;
    }
};