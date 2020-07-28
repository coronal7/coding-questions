#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};


//      1
//     / \
//    2   3
//   / \    \
//  4   5    6
// Vertical Traversal  -- 4 2 1 5 3 6
// Function to find the vertical traversal of a tree. 
// For nodes on the same vertical line print in order of level order.
void verticalTraversal(Node* root)
{
   if(root == NULL) return;
   // use a STL map to store nodes at a particular horizontal distance.
   // STL map is sorted in ascending order by default so that while iterating
   // nodes will come in left to right  order in the o/p.
   map<int, vector<int> > mp;
   int hd = 0;

   // declare a queue for level order traversal.
   // do a level order traversal and find the hd for each node.
   queue<pair<Node*, int > > q;
   q.push(make_pair(root,hd));

   while(!q.empty())
   {
       pair<Node*, int > temp = q.front();
       q.pop();
       hd = temp.second;
       Node * node = temp.first;
       mp[hd].push_back(node->val);

       if(node->left) q.push(make_pair(node->left, hd-1));
       if(node->right) q.push(make_pair(node->right, hd+1));
       
   }

   map<int, vector<int> >::iterator it;
   for(it = mp.begin();it!=mp.end();it++)
   {
       for(int i=0;i<it->second.size();it++)
       {
           cout<<it->second[i]<<" ";
       }
   }
   




   
}

int main()
{
    Node* root;
    int height_tree = height(root);
    return 0;
}