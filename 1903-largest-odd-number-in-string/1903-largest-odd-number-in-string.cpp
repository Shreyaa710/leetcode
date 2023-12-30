class Solution {
public:
    string largestOddNumber(string num) {
        string res;

        int i;
        for(i=num.length();i>=0;i--){
            if((num[i]%2!=0) ){
                res+=num[i];
                break;
            }
        }
        i--;
        while(i>=0){
            res+=num[i];
            i--;
        }
        
        
        reverse(res.begin(),res.end());
        return res;
    }
};