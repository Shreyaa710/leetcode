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

// class Solution {
// public:
//     int reverse(int x){
//         int ans = 0; 
//         while(x!=0){
//             ans = (ans*10) + x%10;
//             x=x/10;
//         }
//         return ans;
//     }

//     bool isPalindrome(int x) {
//         if(x<0) return false;
//         int rev = reverse(x);
//         if(rev == x) return true;
//         else return false;
//     }
// };