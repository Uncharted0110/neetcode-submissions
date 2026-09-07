class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(auto num : nums)
        {   
            auto it = st.find(num);
            if(it != st.end())
                return true;
            st.insert(num);
        }
        return false;
    }
};