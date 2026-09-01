class Solution {               // although it will done using binary search with tc o(log n)
public:                       // i'll come back to solve this at optimal once i get binary search
    int search(vector<int>& nums, int target) {
        // i just search linearly with O(N) tc
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
};