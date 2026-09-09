class Solution {  // marked for review
public:
    long long countCommas(long long n) {
        long cur = 1000;
        long res = 0;

        while(cur <= n) {
            res += n - cur + 1; // i don't know how it done
            cur *= 1000;
        }
        return res;
    }
};