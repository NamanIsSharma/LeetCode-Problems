class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // brute force approach, i'll optimize it tommorow
        int maxlen = 0;
        int n = s.size();
        for(int i=0; i<n; i++){  // generating all substrings
            int hash[256] = {0};     // storing s in hasharray
            for(int j=i; j<n; j++){
                if(hash[s[j]] == 1) break;

                maxlen = max(maxlen, j-i+1); // j-i+1 = len of s at the moment
                hash[s[j]] = 1; //character is visited
            }
        }
        return maxlen;
    }
};