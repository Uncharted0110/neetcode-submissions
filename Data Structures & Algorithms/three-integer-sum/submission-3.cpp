class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int num = nums[i];
            int target = -num;
            int l = i + 1, r = nums.size() - 1;
            while(l < r)
            {
                int sum = nums[l] + nums[r];
                if(sum > target)    
                    r--;
                else if(sum < target)   
                    l++;
                else if(sum == target)  
                {
                    res.push_back({num, nums[l], nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l - 1])
                        l++;
                }
            }
        }
        return res;
    }
};
