class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> lst;

        for(auto& num : nums)
            lst.insert(num);
        
        int res = 0;

        for(auto& a : lst)
        {
            if(lst.find(a - 1) == lst.end())
            {
                int len = 1;
                while(lst.find(a + len) != lst.end())
                    len++;
                res = max(res, len);
            }
        }

        return res;
    }
};
