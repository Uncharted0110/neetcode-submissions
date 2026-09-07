class Solution {
public:
    bool checkAnagram(string& s1, string& s2)
    {
        string temp1 = s1, temp2 = s2;

        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());
        return temp1 == temp2;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 1)
            return {strs};

        vector<vector<string>> res;

        res.push_back({strs[0]});
        
        for(int i = 1; i < strs.size(); i++)
        {
            std::cout << strs[i] << " ";
            bool inserted = false;
            for(int j = 0; j < res.size(); j++)
            {
                std :: cout << "Comparing with " << res[j][0] << std::endl;
                if(checkAnagram(strs[i], res[j][0])){
                    res[j].push_back(strs[i]);
                    std::cout << "Inserted " << strs[i] << " with " << res[j][0] << std::endl;
                    inserted = true;
                    break;
                }
            }
            if(!inserted)
                res.push_back({strs[i]});
        }

        return res;
    }
};
