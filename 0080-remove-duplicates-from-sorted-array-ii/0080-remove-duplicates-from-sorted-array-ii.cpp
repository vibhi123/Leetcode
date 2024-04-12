class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int j=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {   
                int temp=0;
                for(j=i+1;j<nums.size();j++)
                {
                    if(nums[j]==nums[i])
                    temp++;
                    else
                    break;

                }
                nums.erase(nums.begin() + i, nums.begin() + i + temp);
            }
        }
        return nums.size();
    }
};