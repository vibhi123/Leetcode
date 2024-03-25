class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        
        unordered_map<int, int> occurrenceMap;

    
    for (const auto& element : nums) {
        occurrenceMap[element]++;
    }

   
    
    for (const auto& pair : occurrenceMap) {
        if(pair.second==2) 
            ans.push_back(pair.first);
    }
        return ans ;
        
    }
};