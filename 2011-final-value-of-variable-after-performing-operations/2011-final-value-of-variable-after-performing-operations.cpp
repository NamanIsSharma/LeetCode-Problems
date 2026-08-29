class Solution {  // problem done // without any help
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0;
        string s1 = "++X"; string s2 = "X++";
        for(int i=0; i < operations.size(); i++){
            if(operations[i] == s1 || operations[i] == s2){
                sum += 1;
            }
            else{
                sum -= 1;
            }
        }
        return sum;
    }
};