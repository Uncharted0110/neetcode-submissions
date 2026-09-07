class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;

        for(auto &a: nums)
            set.insert(a);

        int res = 0;

        for(auto &a : set)
        {
            if(set.find(a - 1) == set.end())
            {
                int length = 1;
                while(set.find(a + length) != set.end())
                    length++;
                res = max(res, length);
            }
        }

        return res;
    }
};
