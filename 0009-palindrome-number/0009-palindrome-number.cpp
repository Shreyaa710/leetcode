class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,last;
        long long org=x;
       while(x>0)
       {
           last=x%10;
           rev=rev*10+last;
           x=x/10;
       }
        
        return rev==org;
    }
};