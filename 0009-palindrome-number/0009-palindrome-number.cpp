class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        long long original = x; // storing x in original, coz' at the end x becomes 0 in last step of (x/=10)

        while(x>0){
            long long lastdigit = x % 10;
            rev = (rev * 10) + lastdigit;  // used reverse logic to check palindrome
            // for overflow **
            if(rev > INT_MAX || rev < INT_MIN){
                return 0;
            }

            x /= 10;
        }
        // check for palindrome if rev = original
        if(rev == original){
            return true;
        }
        else{
            return false;
        }
    }
};