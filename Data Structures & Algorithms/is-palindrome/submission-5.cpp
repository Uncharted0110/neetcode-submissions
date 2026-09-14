class Solution {
public:
    bool isPalindrome(string s) {
        string s_clean = "";

        for(auto& c : s)
            if(isalnum(c))
                s_clean += c;

        if(s_clean.length() <= 1)
            return true;
        
        int left = 0, right = s_clean.length() - 1;

        while(left <= right)
        {
            cout << static_cast<char>(tolower(s_clean[left])) << static_cast<char>(tolower(s_clean[right])) << "\n";
            if(!(static_cast<char>(tolower(s_clean[left])) == static_cast<char>(tolower(s_clean[right]))))
                return false;
            
            left++; 
            right--;
        }

        return true;
    }
};
