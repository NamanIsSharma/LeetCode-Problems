class Solution {
public:
    long reverse(long x) {
        long revNo = 0;

        while(x!=0){
            long lastdigit = x%10;

            // check for overflow before updating rev
            if((revNo > INT_MAX/10 || revNo < INT_MIN/10)){
                return 0; // return 0 if x overflows
            }
            revNo = (revNo*10) + lastdigit; // condition for reversing the integer
            x /= 10;

        }
        return revNo;
    }
};