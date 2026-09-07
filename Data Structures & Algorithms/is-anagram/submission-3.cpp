class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        std::unordered_map<char, int> map;

        for(int i = 0; i < s.size(); i++)
        {
            map[s[i]]++;
            map[t[i]]--;
        }

        for(auto &a : map)
        {
            if(a.second != 0)
                return false;
        }
        return true;
    }
};
