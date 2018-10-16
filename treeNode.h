#ifndef __TREENODE_H__
#define __TREENODE_H__



class Tree; // forward declaration
class TreeNode{

friend class Tree;

private:
    TreeNode *leftChild;
    char data;
    TreeNode *rightChild;
    // if it is necessary to be able to determine the parent of random nodes,
    // then a forth data member "parent" may be included in this class.

};
#endif
