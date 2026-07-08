class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result;
        vector<vector<string>> sorted = {};
        for(int i = 0; i < strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());            
            result[key].push_back(strs[i]);
        }

        for(auto& pair : result){
            sorted.push_back(pair.second);
        }

        return sorted;
    }
};
