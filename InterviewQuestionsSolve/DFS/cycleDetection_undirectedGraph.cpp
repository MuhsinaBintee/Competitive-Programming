class Graph {
private:
    bool detect(int node,int parent,vector<int>adj[],int vis[]){
        vis[node]=1;
        for(auto i :adj[node]){
            if(!vis[i]){
                if(detect(i, node, adj, vis)==true) return true;
            }
                else if(i!=parent) return true;
        }
        return false;
    }

public:
    bool detectCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
               if(detect(i,-1,adj,vis)==true) return true;
            }
        }
        return false;
    }
};
