class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;
        int left = 0;
        int right = colors.size()-1;
        while(colors[left]==colors[colors.size()-1]) left++;
        while(colors[right]==colors[0]) right--;
        return max(n-left-1,right);
    }
};