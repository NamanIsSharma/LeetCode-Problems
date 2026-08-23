class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        for(long i=1; i<n; i++){
            nums[i] += nums[i-1]; // just adding previous element to current
        }
        return nums;
    }
};