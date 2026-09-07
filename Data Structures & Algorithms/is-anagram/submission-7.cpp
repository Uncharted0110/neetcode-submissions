class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        vector<int> charSet(26, 0);
        for(auto c : s)
        {
            charSet[c - 'a']++;
        }

        for(auto c : t)
        {
            charSet[c - 'a']--;
        }

        for(auto i : charSet)
        {
            if(i != 0)
                return false;
        }
        return true;
    }
};
