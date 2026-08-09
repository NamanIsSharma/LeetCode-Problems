class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0; // it will count the maximum consecutive 1s
        int maxm = 0; // it will store them

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
                maxm = max(maxm, count);
            }
            else{
                count = 0;
            }
        }
        return maxm;
        
    }
};