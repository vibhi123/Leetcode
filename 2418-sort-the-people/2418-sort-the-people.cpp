class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        map<int,string>mp;

        for(int i=0;i<names.size();i++)
        {
            mp[heights[i]]=names[i];
        }

        //vector<string>ans;
        vector<string>ans;

         for (const auto &pair :mp) {
        ans.push_back(pair.second); 
    }
     reverse(ans.begin(),ans.end());
    return ans;

    }
};