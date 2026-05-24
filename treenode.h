#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>
using namespace std;

class TreeNode{

    private:
        int info;
        TreeNode* left;
        TreeNode* right;

    public:
        TreeNode();
        TreeNode(int i);
        TreeNode(int i, TreeNode* sx, TreeNode* dx);

        int getInfo();
        TreeNode* getLeft();
        TreeNode* getRight();

        TreeNode** getPtrLeft();
        TreeNode** getPtrRight();

        void setInfo(int i);
        void setLeft(TreeNode* sx);
        void setRight(TreeNode* dx);
        void setNode(int i, TreeNode* sx, TreeNode* dx);

};

#endif // TREENODE_H
