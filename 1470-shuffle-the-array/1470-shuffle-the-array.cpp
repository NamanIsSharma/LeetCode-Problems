class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n); // created a new array to store the shuffled output

        for(int i=0; i<n; i++){
            ans[2*i] = nums[i]; // x1,x2,x3...(will store elements before n)
            ans[2*i + 1] = nums[i + n]; // y1,y2,y3...(will store elements ahead of n)
            // both thing will create -> ans[] = {x1,y1,x2,y2,x3,y3}
        }
        return ans;
    }
};