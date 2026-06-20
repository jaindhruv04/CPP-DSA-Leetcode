#include <iostream>
#include <TreeNode.h>
#include <isSameTree.cpp>
using namespace std;

bool isSubtree(TreeNode *root, TreeNode *subRoot)
{
    if (root == NULL)
        return false;

    if (isSameTree(root, subRoot))
        return true;

    return isSubtree(root->left, subRoot) ||
           isSubtree(root->right, subRoot);
}

int main()
{

    return 0;
}