class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // this is done using concept of prefix-suffix sum with TC = O(n), SC = O(1)
        int totalSum = 0; 
        for(int i=0; i<nums.size(); i++){
            totalSum += nums[i];  // firstly we'll find the totalSum
        }
        int leftSum = 0; // intiating with 0
        for(int i=0; i<nums.size(); i++){
            int rightSum = totalSum - leftSum - nums[i]; // nums[i] is the current

            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i]; // this will add leftSum everytime with next index
        }
        return -1; // if there isn't pivot index/element
    }
};