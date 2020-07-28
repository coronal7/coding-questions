#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};

// Utility function to connect nodes at same level.
bool connectNodesUtil(Node* root, int level, map<int, vector<Node*> > &mp)
{
    if(!root) return;
    mp[level].push_back(root);
    connectNodesUtil(root->left, level+1,mp);
    connectNodesUtil(root->right,level+1,mp);
}

// Function to connect nodes at same level.
void connectNodes(Node* root)
{
   if(root == NULL) return;
   // declare a map of int and vector of Node* to store nodes at each level.
   map<int, vector<Node*> > mp;
   connectNodesUtil(root, 0, mp); 

   // iterate map to connect nodes
   map<int, vector<Node*> >::iterator it;
   for(it=mp.begin();it!=mp.end();it++)
   {
       for(int i=0;i<it->second.size();i++)
       {
           if(i = it->second.size()-1)
           it->second[i]->nextRight = NULL;
           else
           it->second[i]->nextRight = it->second[i+1];
       }
   }
   
}

int main()
{
    Node* root;
    int height_tree = height(root);
    return 0;
}