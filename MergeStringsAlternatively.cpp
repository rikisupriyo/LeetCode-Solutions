class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x = word1.length();
        int y = word2.length();
        int n = max(x, y);
        string s = "";
        for (int i=0; i<n; i++) {
            if (x) {
                s += word1[i];
                x--; 
            }
            if (y) {
                s += word2[i];
                y--;
            }
        }
        return s;
    }
}; 
