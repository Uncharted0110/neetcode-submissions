class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> dict;
        for(auto &a: nums)
        {
            if(dict[a])
                return true;
            else
                dict[a] = 1;
        }
        return false;
    }
};