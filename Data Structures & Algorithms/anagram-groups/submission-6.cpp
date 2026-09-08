class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mp;
        vector<vector<string>> res;
        for(auto &str : strs)
        {
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            if(mp.find(tmp) != mp.end()) // found
            {
                res[mp[tmp]].push_back(str);
            }
            else // not found
            {
                mp[tmp] = res.size();
                res.push_back({str});
            }
        }

        return res;
    }
};
