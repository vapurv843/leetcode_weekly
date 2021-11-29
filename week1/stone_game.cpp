// Question link:-https://leetcode.com/problems/stone-game/
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        if(piles.size()%2==0)
        {
            return true;
        }
        return false;
        
    }
};