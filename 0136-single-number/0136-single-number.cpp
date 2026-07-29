class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0; // taken single variable that fulfills condn of constant extra space

        for(int val : nums){  
            ans ^= val;  // bitwise XOR concept 
        }
        return ans;
    }    
};