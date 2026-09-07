class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(auto &a : strs)
        {
            vector<int> count(26, 0);
            for(char c : a)
                count[c - 'a']++;
            string key = to_string(count[0]);
            for(int i = 1; i < 26; i++)
                key += "," + to_string(count[i]);
            std::cout << key << std::endl;
            res[key].push_back(a);
        }
        vector<vector<string>> result;
        for(auto &a : res)
            result.push_back(a.second);
        return result;
    }
};
