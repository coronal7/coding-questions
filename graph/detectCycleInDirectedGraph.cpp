bool isCyclic_util(vector<int> adj[], vector<bool> visited, int curr)
{
    if(visited[curr]==true)
        return true;
    
    visited[curr] = true;
    bool FLAG = false;
    for(int i=0;i<adj[curr].size();++i)
    {
        FLAG = isCyclic_util(adj, visited, adj[curr][i]);
        if(FLAG==true)
            return true;
    }
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
   vector<bool> visited(V,false);
   bool FLAG = false;
   for(int i=0;i<V;++i)
   {
           visited[i] = true;
           for(int j=0;j<adj[i].size();++j)
           {
               FLAG = isCyclic_util(adj,visited,adj[i][j]);
               if(FLAG==true)
                   return true;
           }
           visited[i] = false;
   }
   return false;
}