class Solution {
public:
    void removepunc(string &s) {
        string c = "";
        for (auto x:s) {
            if (!ispunct(x) && x != ' ')
                c += tolower(x);
        }
        s = c;
    }
    bool isPalindrome(string s) {
        removepunc(s);
        int i=0, j=s.length()-1;
        while (i <= j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
