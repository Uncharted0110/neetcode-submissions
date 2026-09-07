class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        std::map<char, int> mapS, mapT;

        for(int i = 0; i < s.size(); i++)
        {
            if(mapS[s[i]])
                mapS[s[i]]++;
            else
                mapS[s[i]] = 1;

            if(mapT[t[i]])
                mapT[t[i]]++;
            else
                mapT[t[i]] = 1;
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(mapS[s[i]] != mapT[s[i]])
                return false;
        }
        return true;
    }
};
