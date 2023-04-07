class Solution {
public:
    char findTheDifference(string s, string t) {
        queue<char> q;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (auto x:s) 
            q.push(x);
        
        for (auto y:t) {
            if (q.front() != y)
                return y;
            q.pop();
        }
        return q.front();
    }
};
