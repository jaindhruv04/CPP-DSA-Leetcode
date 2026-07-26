#include <iostream>
#include "TreeNode.h"
#include <queue>
using namespace std;

void preorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void printBFS(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();

        cout << temp->val << " ";

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

vector<vector<int>> levelBFS(TreeNode *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
    {
        return ans;
    }

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {

        int levelSize = q.size();

        vector<int> level;

        for (int i = 0; i < levelSize; i++)
        {

            TreeNode *temp = q.front();
            q.pop();

            level.push_back(temp->val);

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }

        ans.push_back(level);
    }

    return ans;
}

int main()
{

    return 0;
}