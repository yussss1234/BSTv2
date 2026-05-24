#ifndef TREENODE_H
#define TREENODE_H

#include "car.h"

class TreeNode{

    private:
        Car info;
        TreeNode* left;
        TreeNode* right;

    public:
        TreeNode();
        TreeNode(Car c);

        Car getInfo();
        TreeNode* getLeft();
        TreeNode* getRight();

        TreeNode** getPtrLeft();
        TreeNode** getPtrRight();

        void setInfo(Car c);
        void setLeft(TreeNode* sx);
        void setRight(TreeNode* dx);

};

#endif // TREENODE_H
