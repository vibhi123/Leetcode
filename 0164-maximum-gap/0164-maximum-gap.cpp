class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        if(nums.size()<2)
        return 0;

        int maxdiff=INT_MIN;
        sort(nums.begin(),nums.end());

        for(int i=1;i<nums.size();i++)
        {
            if((nums[i]-nums[i-1])>maxdiff)
            maxdiff=(nums[i]-nums[i-1]);
        }
        return maxdiff;
    }
};