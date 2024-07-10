class Solution {
public:
    int minOperations(vector<string>& logs) {
        int i, count = 0;
        for(i = 0; i < logs.size(); i++)
        {
            if(logs[i].size() == 3 and logs[i][0] == '.')
            {
                if(count > 0)
                    count--;
            }
            else if(logs[i][0] != '.')
                count++;
        }
        return count;
    }
};