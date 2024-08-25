class Solution {
public:
    void knap(vector<int>& nums, int i, int target, int sum, int& res) {
        
        if(i == nums.size()) {
            if(sum == target) {
                res++;
            }
            return;
        }
        
        // FIRST ADD THE NUMBER AND THEN EXCLUDE 
        knap(nums, i + 1, target, sum + nums[i], res);
        knap(nums, i + 1, target, sum - nums[i], res);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int res = 0;
        knap(nums, 0, target, 0, res);
        return res;
    }
};
