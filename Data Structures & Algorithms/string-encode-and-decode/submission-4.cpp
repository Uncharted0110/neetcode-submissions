class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(auto& str : strs)
            res += str + "0110";
        return res;
    }

    bool checkForDelimitar(int i, string s)
    {
        if(i < s.length() && s[i] == '0')
            if((i + 1) < s.length() && s[i + 1] == '1')
                if((i + 2) < s.length() && s[i + 2] == '1')
                    if((i + 3) < s.length() && s[i + 3] == '0')
                        return true;
        return false;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string str = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(checkForDelimitar(i, s))
            {
                res.push_back(str);
                str = "";
                i += 3;
                continue;
            }
            str += s[i]; 
        }
        return res;
    }
};
