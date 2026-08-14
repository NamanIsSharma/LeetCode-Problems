/*class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // here the main condition is to check three thing :
        // the current index should be empty (i.e. 0)
        // the previous and the index next to the current should also be 0 to plant flowerbeds

        for(int i=0; i<flowerbed.size(); i++){

            // check for current 
            if(flowerbed[i] == 0){

                // check for left(previous)
                if
            }
    }
};*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        if(n == 0) {
            return true;
        }

        int size = flowerbed.size();

        for(int i = 0; i < size; i++) {

            if(flowerbed[i] == 0 &&
               (i == 0 || flowerbed[i - 1] == 0) &&
               (i == size - 1 || flowerbed[i + 1] == 0)) {

                flowerbed[i] = 1;
                n--;

                if(n == 0) {
                    return true;
                }
            }
        }

        return false;
    }
};