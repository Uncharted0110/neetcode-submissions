class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(auto &a : strs)
            res += a + "/*/";
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        bool split = false;
        string word = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '/')
                if((i + 1 < s.size()) && s[i + 1] == '*')
                    if((i + 2 < s.size()) && s[i + 2] == '/')
                    {
                        res.push_back(word);
                        word = "";
                        i += 2;
                        continue;
                    }
            
            word += s[i];
        }
        return res;
    }
};
