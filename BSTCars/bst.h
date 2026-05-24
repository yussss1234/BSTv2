#ifndef BST_H
#define BST_H

#include "treenode.h"
#include <string>

class BST{

    private:
        TreeNode* root;

        void preOrderWalk(TreeNode* r);
        void postOrderWalk(TreeNode* r);
        void inOrderWalk(TreeNode* r);

        void insert(TreeNode** r, Car c);
        void remove(TreeNode** r);
        bool search(TreeNode* r, string targaInput);

        // Helper ricorsivo privato per l'operatore --
        void decrementaPrecedenti(TreeNode* r, string targaLimite);

    public:
        BST();
        ~BST();

        void helperInsert(Car c);
        TreeNode* helperSearch(string targaInput);

        void operator--();

        void helperPreOrder();
        void helperPostOrder();
        void helperInOrder();

};

#endif // BST_H
