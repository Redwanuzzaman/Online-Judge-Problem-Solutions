class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss;
        ss << x;
        std::string s = ss.str();
        std::string n = s;
        std::reverse(s.begin(), s.end());
        if(n == s) return true;
        return false;
    }
};
