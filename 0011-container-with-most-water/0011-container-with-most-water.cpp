class Solution {
public:
    int maxArea(vector<int>& height) {
        //problem solved using two-pointer approach with optimal 
        int n = height.size();
        // i is at initial in array, j is at end, cap is capacity which initially zero
        int i=0; int j=n-1; int cap = 0; 
        // cap = width*min(height[i], height[j])
        // width = j-i (it will change everytime)
        while(i<j){
            cap = max(cap, ((j-i)*min(height[i],height[j])));

            if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return cap;
    }
};