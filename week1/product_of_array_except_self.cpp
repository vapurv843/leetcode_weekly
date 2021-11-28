class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> left(nums.size());
        
        left[0] = 1;
        for(int i = 1; i < nums.size(); ++i){
            left[i] = nums[i - 1] * left[i - 1];
        }
        // Left = [1, 1, 2, 6]
        
        vector<int> right(nums.size());
        right[nums.size() - 1] = 1;
        
        for(int i = nums.size() - 1; i > 0; --i){
            right[i - 1] = nums[i] * right[i];
        }
        // Right = [24, 12, 4, 1]
        
        
        // Multiply on the same index and you should get the result
        vector<int> result;
        for(int i = 0; i < nums.size(); ++i){
            result.push_back(left[i] * right[i]);
        }
        
        return result;
    }
};