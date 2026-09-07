class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> us;
        for(auto& a: nums)
        {
            if(us.count(a))
                return true;
            us.insert(a);
        }
        return false;
    }
};