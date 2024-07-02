class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i, oddcount = 0;
        for(i = 0; i < arr.size(); i++)
        {
            if(arr[i] % 2 != 0)
                oddcount++;
            else
                oddcount = 0;
            if(oddcount == 3)
                return true;
        }
        return false;
    }
};