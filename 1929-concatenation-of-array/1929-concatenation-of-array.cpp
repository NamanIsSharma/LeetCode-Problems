class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // approach : take the original array and append a copy of itself
        int n = nums.size(); //storing in n, coz hamko original array mein hi change karna hai
        for(int i=0; i<n; i++){
            nums.push_back(nums[i]); // this will make a copy pushback of the array  
        }
        return nums; // now we'll get concatenated array
    }
};