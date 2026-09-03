class Solution { //marked for review
public:
    int scoreOfString(std::string& s) {
        std::vector<char> chars(s.begin(), s.end());
        int score = 0;

        for (int i = 0; i < chars.size() - 1; i++) {
            int diff = chars[i] - chars[i + 1];
            if (diff >= 0) {
                score += diff;
            } else {
                score -= diff;
            }
        }

        return score;
    }
};