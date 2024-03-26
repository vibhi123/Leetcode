class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=0 || nums[i]>nums.size())
                nums[i]=INT_MIN;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=INT_MIN)
            {
               int  ind=abs(nums[i])-1;
            
            if(nums[ind]==INT_MIN)
                nums[ind]=-(ind+1);
            
            else if(nums[ind]>=0)
                nums[ind]= -nums[ind];
                
            }
        }
        cout<<"size="<<nums.size()<<endl;
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
        for(int i=0;i<nums.size();i++)
        {
           
            if(nums[i]==INT_MIN || nums[i]>0)
                return i+1;
        }
        return nums.size()+1;
    }
};