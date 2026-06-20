#include <iostream>
#include <TreeNode.h>
using namespace std;

// https://leetcode.com/problems/symmetric-tree

bool isMirror(TreeNode *left, TreeNode *right)
{
    if (left == NULL && right == NULL)
    {
        return true;
    }

    if (left == NULL || right == NULL)
    {
        return false;
    }

    return left->val == right->val && isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}

bool isSymmetric(TreeNode *root)
{

    if (root == NULL)
    {
        return true;
    }

    return isMirror(root->left, root->right);
}

int main()
{

    return 0;
}