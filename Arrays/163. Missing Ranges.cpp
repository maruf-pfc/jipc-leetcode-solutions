class Solution {
    public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;
        nums.insert(nums.begin(), lower - 1);
        nums.push_back(upper + 1);
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i + 1] - nums[i] > 1){
                ans.push_back({nums[i]+1, nums[i+1] - 1});
            }
        }
        return ans; 
    }
}