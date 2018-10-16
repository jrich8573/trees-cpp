#include <iostream>
#include "tree.h"

//public
void Tree::inOrder(){

    inOrder(root);
}

//private
void Tree::inOrder(TreeNode *currentNode){

    if(currentNode){
        inOrder(currentNode -> leftChild);
        std::cout << currentNode -> data; //when a node is visited, we write its data
        inOrder(currentNode -> rightChild);
    }

}

//public
void Tree::preOrder(){

    preOrder(root);
}

//private
void Tree::preOrder(TreeNode *currentNode){

    if(currentNode){
        std::cout << currentNode -> data;
        preOrder(currentNode -> leftChild);
        preOrder(currentNode -> rightChild);
    }
}

//public
void Tree::postOrder(){

    postOrder(root);
}

//private
void Tree::postOrder(TreeNode *currentNode){

    if(currentNode){
        postOrder(currentNode -> leftChild);
        postOrder(currentNode -> rightChild);
        std::cout << currentNode -> data;
    }

}
