class Solution {
public:
    string removeStars(string s) {
        string ns = "";
        for (int i=0; i<s.length(); i++) {
            if (s[i] != '*')
                ns += s[i];
            else 
                ns.pop_back();
        }
        return ns;
    }
};
