class Solution { // two pointers - optimal approach 
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0; int j = n-1; // i at start, j at end

        while(i<j){
            int sum = numbers[i] + numbers[j];

            if(sum == target)  return {i+1,j+1};  // coz' output required it, as indexing starts from 1 in this problem

            else if(sum > target){
                j--;
            }
            else if(sum < target){
                i++;
            }
        }
        return {}; //coz we have to return something outside the function as it is non-void
    }
};