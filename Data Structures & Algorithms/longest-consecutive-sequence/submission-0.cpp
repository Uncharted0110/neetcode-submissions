class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;

        for(auto &a: nums)
            set.insert(a);

        int res = 0;
        for(auto &a : nums)
        {
            int streak = 0, curr = a;
            while(set.find(curr) != set.end())
            {
                streak++;
                curr++;
            }
            res = max(res, streak);
        }

        return res;
    }
};
