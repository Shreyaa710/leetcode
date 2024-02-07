class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(n>0){
            double temp = myPow(x,n/2);
            if(n%2==1) return temp*temp*x;
            return temp*temp;
        }
        else{
            return 1.0/(x*myPow(x,-(long long)n-1));
        }
    }
};