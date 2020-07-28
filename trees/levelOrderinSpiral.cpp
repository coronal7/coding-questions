#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};


// Function to find the level order in spiral form of a tree. 
void spiralLevelOrder(Node* root)
{
   if(root == NULL) return 0;
   stack<Node*> s1, s2;
   s1.push(root);
   while(!s1.empty() || !s2.empty())
   {
       while(!s1.empty())
       {
           Node* temp = s1.top();
           s1.pop();
           cout<<temp->val<<" ";
           if(temp->left) s2.push(temp->left);
           if(temp->right) s2.push(temp->right);
       }
       while(!s2.empty())
       {
           Node* temp = s2.top();
           s2.pop();
           cout<<temp->val<<" ";
           if(temp->right) s1.push(temp->right);
           if(temp->left) s1.push(temp->left);
           
       }
   }
}

int main()
{
    Node* root;
    int height_tree = height(root);
    return 0;
}