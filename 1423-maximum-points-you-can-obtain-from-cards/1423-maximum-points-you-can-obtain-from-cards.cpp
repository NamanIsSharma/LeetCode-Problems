class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) { // cardPoints is the array
        int lsum = 0, rsum = 0, maxSum = 0; //initially

        for(int i = 0; i <= k-1; i++){
            lsum += cardPoints[i];
            maxSum = lsum;
        }
        int n = cardPoints.size();
        int rindex = n-1;

        for(int i = k-1; i>=0; i--){
            lsum -= cardPoints[i]; // removing left elements of array
            rsum += cardPoints[rindex]; //adding from right side of array
            rindex -= 1; //decreasing r index size to add up the elements of right

            maxSum = max(maxSum, lsum + rsum); // lsum + rsum , this is the approach
        }
        return maxSum;
    }
};