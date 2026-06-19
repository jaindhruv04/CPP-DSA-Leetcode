#include <iostream>
#include <TreeNode.h>
using namespace std;

int maxDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int main()
{

    return 0;
}