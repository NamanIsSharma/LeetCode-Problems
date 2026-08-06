class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
// two-pinter approach (optimal approach with T.C= O(N) and S.C = O(1))

        int j = -1; // initially j is -1 and will change to 0, whenever come
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        if(j==-1) return; //no non-zero numbers  

        for(int i=j+1; i<n; i++){ //now i will start after the element where j got first 0
            if(nums[i] != 0){
                swap(nums[i], nums[j]); // i will swap with j for getting non-zero elements at first
                j++; // j will increasing till n in search of zero
            }
    
        }
        return; // void fn, just return
    }
};