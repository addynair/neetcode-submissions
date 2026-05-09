class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
       unordered_map<int, int> mp;
       for(int x: nums){
        mp[x]++;
       }
       vector<vector<int>> bucket(n+1);
       for(auto y: mp){
        bucket[y.second].push_back(y.first);
       }
       int b = bucket.size();
       vector<int> ans;
       for(int i = b-1; i>=0 && ans.size()<k; i--){
        for(int c: bucket[i]){
            ans.push_back(c);
            if(ans.size() == k) break;
        }
       }
       return ans;
    }
};