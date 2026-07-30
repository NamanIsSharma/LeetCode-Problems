class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x;
        if(n==1) return true; // 2^0 = 1
        
        if(n<=0 || n%2!=0) return false; //coz' n can't be less and equal to zero or negative

        // I have written two base checklist for n, now time to call function and dividing n with 2, coz' it will check until it meets base case

        return isPowerOfTwo(n/2);
    }
};