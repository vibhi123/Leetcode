class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int maxm = 0, j;

        if (nums.size() <= 1)
            return nums.size();

        for (int i = 0; i + 1 < nums.size(); i++) 
        {

            int count = 1;

            if (nums[i] + 1 == nums[i + 1]) 
            {
                for (j = i; j + 1 < nums.size(); j++) 
                {
                    if (nums[j] + 1 == nums[j + 1])
                    {    ++count; cout<<"count="<<count<<endl;}

                    else if (nums[j] == nums[j + 1]) 
                    {
                       cout<<"\n faltu me " ;
                    } 
                    else
                        break;
                }

                i = j;
            }
            maxm = max(count, maxm);
        }
        return maxm;
    }
};