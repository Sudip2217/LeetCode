class Solution {
public:
    int countSeniors(vector<string>& details) {
        int i,count = 0;
        for(i = 0; i < details.size(); i++)
        {
            if(details[i][11] > '6' or (details[i][11] == '6' and details[i][12] > '0'))
                count++;
        }
        return count;
    }
};