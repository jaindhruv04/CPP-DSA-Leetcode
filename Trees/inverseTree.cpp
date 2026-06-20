#include <iostream>
#include <TreeNode.h>
using namespace std;

 TreeNode* invertTree(TreeNode* root) {

        if (root == NULL) {
            return NULL;
        }

        swap(root->left, root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }



int main() {
    
    return 0;
}