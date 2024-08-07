class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int minv = INT_MAX;
        int n = nums.size();
        if(n <= 4) return 0 ; 
        
        minv = min(minv, nums[n-4]- nums[0]);
      
        minv = min(minv, nums[n-1] - nums[3]);
        
        minv = min(minv , nums[n-3]-nums[1]);
        
        minv = min(minv, nums[n-2]-nums[2]);
        
        return minv ;
    }
};