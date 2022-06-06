/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

#include<bits/stdc++.h>
using namespace std;
class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};
void inorder(TreeNode* root,vector<int> &ans){
    if(root==NULL)return;
    inorder(root->left,ans);
    //cout<<root->data<<" ";
    ans.push_back(root->data);
    inorder(root->right,ans);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    inorder(root,ans);
    return ans;
}

int main(){
    TreeNode* root=new TreeNode(10);
    root->left=new TreeNode(60);
    root->right=new TreeNode(50);
    root->right->left=new TreeNode(40);
    getInOrderTraversal(root);
        
    return 0;
}