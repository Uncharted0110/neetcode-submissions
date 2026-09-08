class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto& i : nums)
            mp[i]++;

        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(),
            [](auto a, auto b)
            {
                return a.second > b.second;
            });
        
        vector<int> res;
        res.resize(k);
        for(int i = 0; i < k; i++)
            res[i] = vec[i].first;
        
        return res;
    }
};
