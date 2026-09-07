class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(auto &a : nums)
            count[a]++;
        
        vector<pair<int, int>> arr;
        for(auto &a : count)
            arr.push_back({a.second, a.first});
        sort(arr.rbegin(), arr.rend());
        
        vector<int> res;
        for(int i = 0; i < k; i++)
            res.push_back(arr[i].second);
        return res;
    }
};
