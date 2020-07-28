vector <int> bfs(vector<int> g[], int N) {

    // Your code here
    vector<int> bfs_traversal;
    bool visited[N] = {false};
    queue<int> q;
    q.push(0);
    vector<int>::iterator it;
    while(!q.empty())
    {
        int top = q.front();
        visited[top] = true;
        bfs_traversal.push_back(top);
        q.pop();
        for(it=g[top].begin();it!=g[top].end(); it++)
        {
            if(!visited[*it])
            q.push(*it);
                
        }
    }
    return bfs_traversal;
}