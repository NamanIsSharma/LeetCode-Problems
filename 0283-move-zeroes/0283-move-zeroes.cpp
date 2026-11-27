class Solution { //2-pointer optimal
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j=0;j<n;j++){
            if(nums[j] != 0){
                nums[i] = nums[j]; // will start filling non-zeros values at begin
                i++;
            }
        }
        while(i<n){
            nums[i] = 0; // this will fill zeros at remaining position after non-zeros
            i++;
        }
    } // since fn is void , no neet to return outside
};