class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size(); //it stores element, kinda loops type of vector
        sort(begin(nums), end(nums)); // arr sort

        int case1 = nums[n-1]*nums[n-2]*nums[n-3]; //normal case 
        int case2 = nums[0]*nums[1]*nums[n-1]; //case for negative elements in array

        return max(case1, case2);
    }
};