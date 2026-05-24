#include "bst.h"

BST::BST(){

    root = nullptr;

}

BST::~BST(){

    remove(&root);

}

void BST::preOrderWalk(TreeNode* r){

    if(r != nullptr){

        cout << " " << r->getInfo();
        preOrderWalk(r->getLeft());
        preOrderWalk(r->getRight());

    }

}

void BST::postOredrWalk(TreeNode* r){

    if(r != nullptr){

        postOredrWalk(r->getLeft());
        postOredrWalk(r->getRight());
        cout << " " << r->getInfo();

    }

}

void BST::inOrderWalk(TreeNode* r){

    if(r != nullptr){

        inOrderWalk(r->getLeft());
        cout << " " << r->getInfo();
        inOrderWalk(r->getRight());

    }

}

void BST::insert(TreeNode** r, int info){

    if(*r == nullptr){

        *r = new TreeNode(info);

    }else{

        if((*r)->getInfo() > info){

            insert((*r)->getPtrLeft(), info);

        }else{

            if((*r)->getInfo() < info){

                insert((*r)->getPtrRight(), info);

            }

        }

    }

}

void BST::remove(TreeNode** r){

    if(*r != nullptr){

        remove((*r)->getPtrLeft());
        remove((*r)->getPtrRight());
        delete *r;
        *r = nullptr;

    }

}

bool BST::search(TreeNode* r, int info){

    if(r == nullptr){

        return false;

    }

    if(r->getInfo() == info){

        return true;

    }

    if(r->getInfo() > info){

        return search(r->getLeft(), info);

    }else{

        if(r->getInfo() < info){

            return search(r->getRight(), info);

        }

    }

}

int BST::contaNodi(TreeNode* r){

    if(r == nullptr){

        return 0;

    }

    return contaNodi(r->getLeft()) + contaNodi(r->getRight()) + 1;

}

int BST::somma(TreeNode* r){

    if(r == nullptr){

        return 0;

    }

    return r->getInfo() + somma(r->getLeft()) + somma(r->getRight());

}

TreeNode* BST::searchMin(){

    TreeNode* pX = root;

    while(pX->getLeft() != nullptr){

        pX = pX->getLeft();

    }

    return pX;

}

TreeNode* BST::searchMax(){

    TreeNode* pX = root;

    while(pX->getRight() != nullptr){

        pX = pX->getRight();

    }

    return pX;

}

int BST::contaFoglie(TreeNode* r){

    if(r == nullptr){

        return 0;

    }

    if(r->getLeft() == nullptr && r->getRight() == nullptr){

        return 1;

    }

    return contaFoglie(r->getLeft()) + contaFoglie(r->getRight());

}

int BST::altezza(TreeNode* r){

    if(r == nullptr){

        return 0;

    }

    int sx = altezza(r->getLeft());
    int dx = altezza(r->getRight());

    if(sx > dx){

        return sx + 1;

    }else{

        return dx + 1;

    }

}

void BST::helperPreOrder(){

    preOrderWalk(root);

}

void BST::helperPostOrder(){

    postOredrWalk(root);

}

void BST::helperInOrder(){

    inOrderWalk(root);

}

void BST::helperInsert(int info){

    insert(&root, info);

}

bool BST::helperSearch(int info){

    return search(root, info);

}

int BST::helperContaNodi(){

    return contaNodi(root);

}

int BST::helperSomma(){

    return somma(root);

}

TreeNode* BST::helperSearchMin(){

    return searchMin();

}

TreeNode* BST::helperSearcMax(){

    return searchMax();

}

int BST::helperContaFoglie(){

    contaFoglie(root);

}

int BST::helperAltezza(){

    altezza(root);

}

int BST::max(){

    TreeNode* pX = root;

    while(pX->getRight() != nullptr){

        pX = pX->getRight();

    }

    return pX->getInfo();

}

int BST::min(){

    TreeNode* pX = root;

    while(pX->getLeft() != nullptr){

        pX = pX->getLeft();

    }

    return pX->getInfo();

}

