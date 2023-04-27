class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> s; vector<bool> vis(rooms.size(), false);
        int c=0;
        s.push(0);
        vis[0] = true;
        while(!s.empty()) {
            int u=s.top(); s.pop();
            
            if(!vis[u]) {c++; vis[u] = true;}
		
		    for(auto v:rooms[u]) {
			    if(!vis[v]) 
				    s.push(v);
		    }
        }

        return (c == rooms.size()-1);
    }
};


//another solution
void dfs(vector<vector<int>> &rooms , vector<bool> &visited , int start)    {
        visited[start] = 1;
        for(auto i : rooms[start])
            if(!visited[i])
                dfs(rooms , visited , i);
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited( rooms.size() );        
        dfs(rooms , visited , 0);
        return rooms.size() == count(visited.begin() , visited.end() , 1);
    }
