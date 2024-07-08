class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles;

        while(numBottles >= numExchange){
            int emptyBottles = numBottles/numExchange;
            count += emptyBottles;
            numBottles = emptyBottles + numBottles%numExchange;
        }
        return count;
    }
};