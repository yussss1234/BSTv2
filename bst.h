#ifndef BST_H
#define BST_H

#include "treenode.h"

class BST{

    private:
        TreeNode* root;

        void preOrderWalk(TreeNode* r);
        void postOredrWalk(TreeNode* r);
        void inOrderWalk(TreeNode* r);

        void insert(TreeNode** r, int info);
        void remove(TreeNode** r);
        bool search(TreeNode* r, int info);

        int contaNodi(TreeNode* r);
        int somma(TreeNode* r);
        TreeNode* searchMin();
        TreeNode* searchMax();
        int contaFoglie(TreeNode* r);
        int altezza(TreeNode* r);

    public:
        BST();
        ~BST();

        void helperPreOrder();
        void helperPostOrder();
        void helperInOrder();

        void helperInsert(int info);
        bool helperSearch(int info);

        int helperContaNodi();
        int helperSomma();
        TreeNode* helperSearchMin();
        TreeNode* helperSearcMax();
        int helperContaFoglie();
        int helperAltezza();

        int max();
        int min();

};

#endif // BST_H
