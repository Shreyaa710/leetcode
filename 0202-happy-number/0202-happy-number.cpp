class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int> s;
       
        int res=0;
        while(n!= 1 && !s.contains(n)){
            s.insert(n);
             int ans=0;
            while(n!=0){
                res=n%10;
                ans+=(res*res);
                n=n/10;
            }
            n=ans;
        }
        return n==1;
    }
};