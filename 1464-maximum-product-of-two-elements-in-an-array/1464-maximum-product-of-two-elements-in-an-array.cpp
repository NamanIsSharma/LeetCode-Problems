class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // I'll find largest and second largest element 
        // then i'll return the product as per asked

        int first = 0; // largest element
        int second = 0; // second largest

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > first){
                second = first; //value storing ulti taraf se hoti hai, pehle first ki value second mein jaayegi, then first new value lega
                first = nums[i];
            }
            else if(nums[i] > second){ // agar -> largest milne ke baad agar koi second largest element array mein mile
                second = nums[i];
            }
        }
        return (first-1) * (second-1);
    }
};