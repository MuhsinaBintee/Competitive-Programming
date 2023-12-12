class Graph {
private:
    bool detect(int src,vector<int>adj[],int vis[]){
        vis[src]=1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto i :adj[node]){
                if(!vis[i]){
                    q.push({i,node});
                    vis[i]=1;
                }
                else if(i!=parent) return true;
            }
        }
        return false;
    }

public:
    bool detectCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
               if(detect(i,adj,vis)==true) return true;
            }
        }
        return false;
    }
};
