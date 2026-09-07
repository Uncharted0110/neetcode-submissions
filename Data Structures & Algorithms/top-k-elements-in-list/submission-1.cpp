class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(auto &a : nums)
            count[a]++;
        
        vector<vector<int>> arr(nums.size() + 1);
        for(auto &a : count)
            arr[a.second].push_back(a.first);

        vector<int> res;
        for(int i = nums.size(); i > 0; i--)
        {
            for(auto &a: arr[i])
            {
                res.push_back(a);
                if(res.size() == k)
                    return res;
            }
        }
        return res;
    }
};
