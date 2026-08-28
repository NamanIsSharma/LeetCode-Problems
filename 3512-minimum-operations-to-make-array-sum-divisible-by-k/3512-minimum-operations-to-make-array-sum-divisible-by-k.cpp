class Solution { /// if we noticed we just have to return the remainder after dividing the sum from k (easy - peasy)
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0; //intially sum is zero
        for(int i=0; i<nums.size(); i++){
            sum += nums[i]; // update sum till adding last element
        }
        return sum % k; // remainder = minm operation 
    }
};