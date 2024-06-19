class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(static_cast<long long>(m) * k > bloomDay.size())
            return -1;
        int n = bloomDay.size();
        int mi = INT_MAX, ma = INT_MIN;
        for(auto d: bloomDay)
        {
            mi = min(mi,d);
            ma = max(ma,d);
        }
        int mid, curr, adj;
        while(mi < ma)
        {
            mid = mi + (ma - mi)/2;
            curr = 0; adj = 0;
            for(int i = 0; i <n; i++)
            {
                if(bloomDay[i] > mid) adj = 0;
                else
                {
                    adj++;
                    if(adj == k)
                    {
                        adj = 0;
                        curr += 1;
                    }
                }
               if(curr >= m)break;
            }
             if(curr < m)mi = mid+1;
                else ma = mid;
        }
        return mi;
    }
};