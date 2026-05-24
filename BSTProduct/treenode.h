#ifndef TREENODE_H
#define TREENODE_H

#include "product.h"

class TreeNode{

    private:
        Product info;
        TreeNode* left;
        TreeNode* right;

    public:
        TreeNode();
        TreeNode(Product p);

        Product getInfo();
        TreeNode* getLeft();
        TreeNode* getRight();

        TreeNode** getPtrLeft();
        TreeNode** getPtrRight();

        void setInfo(Product p);
        void setLeft(TreeNode* sx);
        void setRight(TreeNode* dx);

};

#endif // TREENODE_H
