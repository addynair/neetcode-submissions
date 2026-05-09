class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto lb = lower_bound(nums.begin(), nums.end(), target);
        int search = lb - nums.begin();
        return search;
    }
};