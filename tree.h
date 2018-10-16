#ifndef __TREE_H__
#define __TREE_H__

#include "treeNode.h"

class Tree{

public:
    // Tree operations
    void inOrder();
    // driver calls workhorse for traversal of entire tree. The driver is declared
    // as a public member function of Tree

    void preOrder();
    // driver calls workhorse for traversal of entire tree. The driver is declared
    // as a public member function of Tree

    void postOrder();
    // driver calls workhorse for traversal of entire tree. The driver is declared
    // as a public member function of Tree




private:
    void inOrder(TreeNode *currentNode);
    // workhorse traverses the subtree rooted at CurrentNode (which is a pointer
    // to a node in a binary tree). The workhorse is declared as a private member
    // function of Tree. The output: A/B*C*D+E


    void preOrder(TreeNode *currentNode);
    // workhorse traverses the subtree rooted at CurrentNode (which is a pointer
    // to a node in a binary tree). The workhorse is declared as a private member
    // function of Tree. The output: A/B*C*D+E

    void postOrder(TreeNode *currentNode);
    // driver calls workhorse for traversal of entire tree. The driver is declared
    // as a public member function of Tree

    TreeNode *root; // this data member serves as the access pointer to the tree


};
#endif
