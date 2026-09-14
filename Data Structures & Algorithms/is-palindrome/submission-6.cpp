class Solution {
public:
    bool isPalindrome(string s) {
        string s_clean = "";

        for(auto& c : s)
            if(isalnum(c))
                s_clean += tolower(c);

        if(s_clean.length() <= 1)
            return true;
        
        int left = 0, right = s_clean.length() - 1;

        while(left <= right)
        {
            cout << s_clean[left] << s_clean[right] << "\n";
            if(!(s_clean[left] == s_clean[right]))
                return false;
            
            left++; 
            right--;
        }

        return true;
    }
};
