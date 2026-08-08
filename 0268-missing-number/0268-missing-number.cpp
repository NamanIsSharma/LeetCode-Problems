class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // t.c = O(n), s.c =O(1)
        int n = nums.size();

        int sum = (n*(n+1))/2;  // i just took the sum of all numbers till array size (1 to n)

        // now i will find the sum of elements inside the array
        int sum2 = 0;
        for(int i=0; i<n; i++){
            sum2 += nums[i]; 
        }
        return sum - sum2; // and we will get the missing number
    }
};