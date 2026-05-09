class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        int l= 0;
        string ans;
        while(l< max(n1,n2)){
            if(l<n1){
                ans.push_back(word1[l]);
            }
            if(l<n2){
                ans.push_back(word2[l]);
            }
            l++;
        }
        return ans;
    }
};