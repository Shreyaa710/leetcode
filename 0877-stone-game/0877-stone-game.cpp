class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int start=0, end=piles.size()-1;
        int alice=0, bob=0;
        while(start<end){
            alice+=max(piles[start],piles[end]);
            piles[start]>piles[end]?start++:end--;
            bob+=min(piles[start],piles[end]);
            piles[start]<piles[end]?start++:end--;
        }
        return alice>bob;
    }
};