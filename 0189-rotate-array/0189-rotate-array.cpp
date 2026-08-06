class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // optimal solution with T.C. = O(2N), S.C = O(1)
        int n = nums.size();

        k = k % n; // coz agar k ki value array size se badi ho jaaye then it will equivalent to its modulo

        // STEP 1. Reverse whole array
        reverse(nums.begin(), nums.end());  // [7,6,5,4,3,2,1]

        // STEP 2. Reverse array till k
        reverse(nums.begin(), nums.begin() + k); // [5,6,7,4,3,2,1]

        // STEP 3. Reverse array after kth index till end
        reverse(nums.begin() + k, nums.end()); // [5,6,7,1,2,3,4]
    }
};