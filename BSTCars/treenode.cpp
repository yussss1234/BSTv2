#include "treenode.h"

TreeNode::TreeNode(){

    left = right = nullptr;

}

TreeNode::TreeNode(Car c){

    info = c;
    left = right = nullptr;

}

Car TreeNode::getInfo(){

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

void TreeNode::setInfo(Car c){

    info = c;

}

void TreeNode::setLeft(TreeNode* sx){

    left = sx;

}

void TreeNode::setRight(TreeNode* dx){

    right = dx;

}
