class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        list<int> l; int i=0;
        vector<int> res;
        for(int j=0; j<v.size(); j++) {
            while(l.size() > 0 && l.back() < v[j]) l.pop_back();
            l.push_back(v[j]);

            if(j-i+1 == k) {
                res.push_back(l.front());
            
                if(v[i] == l.front()) l.pop_front();

                i++;
            }
        }
        return res; 
    }
};
