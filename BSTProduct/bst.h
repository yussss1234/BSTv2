#ifndef BST_H
#define BST_H

#include "treenode.h"

class BST{

    private:
        TreeNode* root;

        void preOrderWalk(TreeNode* r);
        void postOrderWalk(TreeNode* r);
        void inOrderWalk(TreeNode* r);

        void insert(TreeNode** r, Product p);
        void remove(TreeNode** r);
        TreeNode* search(TreeNode* r, int codice);

        int contaNodi(TreeNode* r);

    public:
        BST();
        ~BST();

        BST& operator>>(Product p);
        TreeNode* operator%(int codice);
        int operator!();

        void helperPreOrder();
        void helperPostOrder();
        void helperInOrder();

};

#endif // BST_H
