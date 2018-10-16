#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__



template <class KeyType>
class BinaryTree{

    // objects: a finite set of nodes either empty of consisting of a root node,
    // left BinaryTree and right BinaryTree


public:
    BinaryTree(); // creates an empty binary tree

    bool isEmpty(); //if the binary tree is empty return TRUE else return FALSE

    BinaryTree(BinaryTree b1, Element <KeyType> item, BinaryTree b2);
    // creates a binary tree whose left subtree is b1, whose right subtree is b2
    // and whose root node contains item

    BinaryTree Lchild(); // if isEmpty return error, else return the left subtree
    // of *this

    Element <KeyType> Data();
    // if isEmpty return error, else return the data in the root node of *this

    BinaryTree Rchild();
    // if isEmpty return error, else return the right subtree of *this



};
#endif
