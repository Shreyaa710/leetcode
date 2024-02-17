class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int rs=0,i,sum=0,j=0,res=0;
        int n=cardPoints.size();
        for(i=n-1;i>=n-k;i--){
            sum+=cardPoints[i];
        }
        i++;
        res=max(res,sum);
        while(j<k){
            sum=(sum-cardPoints[i++])+cardPoints[j++];
            res=max(res,sum);
        }
        return res;
        
    }
};