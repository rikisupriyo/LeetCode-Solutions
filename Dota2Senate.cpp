class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r, d;
        int n = senate.size();

        for(int i=0; i<n; i++) 
            (senate[i] == 'R')? r.push(i) : d.push(i);

        while(!r.empty() && !d.empty()) {
            int u = r.front(), v = d.front();
            r.pop(); d.pop();
            (u < v)? r.push(u + n) : d.push(v + n);
        }

        if(r.size() > d.size()) return "Radiant";
        return "Dire";
    }
};
