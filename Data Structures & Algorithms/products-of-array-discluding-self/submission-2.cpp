class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, zeroCount = 0;
        for(auto& num : nums)
        {
            if(num == 0)
                zeroCount++;
            else
                prod *= num;
        }

        if(zeroCount > 1)   
            return vector<int>(nums.size(), 0);
        
        vector<int> res(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {
             if(zeroCount > 0)
                 res[i] = (nums[i] == 0) ? prod : 0;
             else
                 res[i] = prod / nums[i];
        }

        return res;
    }
};
