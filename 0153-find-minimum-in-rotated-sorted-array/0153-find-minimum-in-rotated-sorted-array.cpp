class Solution { // i'm trying this with linear search with O(n) tc, it's optimal is binary O(logn)
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0]; // we'll let our first index be minimum at first
        for(int i=0; i<n; i++){
            mini = min(mini, nums[i]);
        }
        return mini;
    }// i'll do it with optimal, once i learn implementation of binary search
};