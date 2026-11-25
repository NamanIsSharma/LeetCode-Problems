class Solution { // two pointer approach
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n); //created an vector to store output
        int i = 0, j = n-1, k = n-1; // i at begin, j at end, k at end to store squared values
        
        for(int x=0; x<n; x++){
            if(nums[i] * nums[i] > nums[j] * nums[j]){
               ans[k] = nums[i] * nums[i];
            i++;
            }
            else{
                ans[k] = nums[j] * nums[j];
                j--;
            }
            k--; 
        }
        return ans;
    }
};