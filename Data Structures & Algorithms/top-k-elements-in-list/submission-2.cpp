class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(auto &a : nums)
            count[a]++;
        
        priority_queue<pair<int, int>> heap;
        for(auto &a : count)
            heap.push({a.second, a.first});
            
        vector<int> res;
        for(int i = 0; i < k; i++)
        {
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};
