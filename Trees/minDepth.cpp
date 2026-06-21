#include <iostream>
#include "TreeNode.h"
using namespace std;

int minDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->right == NULL && root->left != NULL)
    {
        return 1 + minDepth(root->left);
    }

    if (root->left == NULL && root->right != NULL)
    {
        return 1 + minDepth(root->right);
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    return 1 + min(minDepth(root->right), minDepth(root->left));
}

int main()
{

    return 0;
}