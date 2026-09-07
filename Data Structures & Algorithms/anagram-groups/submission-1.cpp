class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(auto &a : strs)
        {
            string temp = a;
            sort(temp.begin(), temp.end());
            res[temp].push_back(a);
        }
        vector<vector<string>> result;
        for(auto &a : res)
            result.push_back(a.second);
        return result;
    }
};
