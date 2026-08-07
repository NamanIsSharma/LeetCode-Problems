class Solution {           //  this problem is marked for review
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        int count = 0; 

        for(int i = 0; i < n; i++) {

            // Compare current element with the next element.
            // (i + 1) % n makes the last element compare with the first.
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }

            if(count > 1) {
                return false;
            }
        }

        // If there is 0 or 1 break, it is valid.
        return true;
    }
};