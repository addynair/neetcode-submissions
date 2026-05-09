class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string , vector<string>> word;

        for(string s:strs){
            string key = s;
            sort(key.begin(), key.end());
            word[key].push_back(s);
        }

        for(auto pair: word){
            result.push_back(pair.second);
        }
        return result;
        
    }
};
