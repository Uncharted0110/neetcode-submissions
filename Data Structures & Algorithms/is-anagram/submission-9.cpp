class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        vector<int> charSet(26, 0);
        for(int i = 0; i < s.length(); i++)
        {
            charSet[s[i] - 'a']++;
            charSet[t[i] - 'a']--;
        }

        for(auto i : charSet)
            if(i != 0)
                return false;

        return true;
    }
};
