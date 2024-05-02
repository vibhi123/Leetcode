class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int i =0,j=nums.size()-1;

        while(i<j)
        {
            cout<<endl<<nums[i]<<" "<<nums[j];
            if(-nums[i]==nums[j])
            return nums[j];

            if(abs(nums[i])>nums[j])
            i++;

            else if(abs(nums[i])<nums[j])
            j--;

            else if(nums[j]>0)
            return -1;
        }

        return -1;
    }
};