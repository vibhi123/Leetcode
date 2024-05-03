class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        unordered_set<char>mySet;
        int hash[26] = {0};

        vector<int>ans;

       

        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-'a']++;
        }


        int i=0,j;

        for( i=0;i<s.size();)
        {  
            int temp=0;

            for(j=i;j<s.size();j++)
            {
                if(mySet.find(s[j])==mySet.end())
                {    
                     cout<<s[j]<<endl;
                    mySet.insert(s[j]);
                    temp=temp + hash[s[j]-'a']-1;
                }
                else
                temp -= 1;

                if(temp==0)
                {
                    ans.push_back(j-i+1);
                    mySet.clear();
                    break;
                }

            }
          i=j+1;  
        } 

        return ans;   

    }
};
