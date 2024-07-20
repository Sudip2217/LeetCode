class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double totalWaitingTime = 0;
        int totalTime = customers[0][0];

        for(vector<int> &time : customers){
            int arrivalTime = time[0];
            int timeTakeToPrepareFood = time[1];
            
            if(totalTime < arrivalTime){
                totalTime = arrivalTime;
            }
            totalTime += timeTakeToPrepareFood;

            if(totalTime <= arrivalTime){
                totalWaitingTime += timeTakeToPrepareFood;
            }else{
                totalWaitingTime +=(totalTime - arrivalTime);
            }
        }
        return (totalWaitingTime)/n;
    }
};