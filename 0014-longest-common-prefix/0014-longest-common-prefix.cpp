class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string s="";
        
        int min=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<min)
                min=strs[i].size();
            
        }
        
        for(int i=0;i<min;i++)
        {    
            int flag=1;
            for(int j=1;j<strs.size();)
            {   
                
                if(strs[j][i]==strs[j-1][i])
                {
                    j++;;
                }
                else
                {   flag=0;
                    break;
                }
            }
            if(flag==0)
                break;
           s=s+strs[0][i]; 
        }
        
        return s;
    }
};