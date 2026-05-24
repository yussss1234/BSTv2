#include "treenode.h"

TreeNode::TreeNode(){

    left = right = nullptr;

}

TreeNode::TreeNode(Product p){

    info = p;
    left = right = nullptr;

}

Product TreeNode::getInfo(){

    return info;

}

TreeNode* TreeNode::getLeft(){

    return left;

}

TreeNode* TreeNode::getRight(){

    return right;

}

TreeNode** TreeNode::getPtrLeft(){

    return &left;

}

TreeNode** TreeNode::getPtrRight(){

    return &right;

}

void TreeNode::setInfo(Product p){

    info = p;

}

void TreeNode::setLeft(TreeNode* sx){

    left = sx;

}

void TreeNode::setRight(TreeNode* dx){

    right = dx;

}
