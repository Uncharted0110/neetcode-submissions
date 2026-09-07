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

        return all_of(charSet.begin(), charSet.end(), 
                    [](int x) {
                        return x == 0;
                        });
    }
};
