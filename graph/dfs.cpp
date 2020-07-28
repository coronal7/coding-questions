void dfs(int s, vector<int> g[], bool vis[])
{
    vis[s] = true;
    cout<<s<<" ";
    vector<int>::iterator it;
    for(it=g[s].begin();it!=g[s].end();it++)
    {
        if(!vis[*it])
        dfs(*it,g,vis);
    }
}