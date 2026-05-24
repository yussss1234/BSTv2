#include "bst.h"
#include <iostream>
using namespace std;

BST::BST(){

    root = nullptr;

}

BST::~BST(){

    remove(&root);

}

void BST::preOrderWalk(TreeNode* r){

    if(r != nullptr){

        cout << "[Cod: " << r->getInfo().getCode() << " | Qta: " << r->getInfo().getQta() << " | " << r->getInfo().getPrice() << "e] ";
        preOrderWalk(r->getLeft());
        preOrderWalk(r->getRight());

    }

}

void BST::postOrderWalk(TreeNode* r){

    if(r != nullptr){

        postOrderWalk(r->getLeft());
        postOrderWalk(r->getRight());
        cout << "[Cod: " << r->getInfo().getCode() << " | Qta: " << r->getInfo().getQta() << " | " << r->getInfo().getPrice() << "e] ";

    }

}

void BST::inOrderWalk(TreeNode* r){

    if(r != nullptr){

        inOrderWalk(r->getLeft());
        cout << "[Cod: " << r->getInfo().getCode() << " | Qta: " << r->getInfo().getQta() << " | " << r->getInfo().getPrice() << "e] ";
        inOrderWalk(r->getRight());

    }

}

void BST::insert(TreeNode** r, Product p){

    if(*r == nullptr){

        *r = new TreeNode(p);

    }else{

        if((*r)->getInfo().getCode() > p.getCode()){

            insert((*r)->getPtrLeft(), p);

        }else{

            if((*r)->getInfo().getCode() < p.getCode()){

                insert((*r)->getPtrRight(), p);

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

TreeNode* BST::search(TreeNode* r, int codice){

    if(r == nullptr){

        return nullptr;

    }

    if(r->getInfo().getCode() == codice){

        return r;

    }

    if(r->getInfo().getCode() > codice){

        return search(r->getLeft(), codice);

    }else{

        return search(r->getRight(), codice);

    }

}

int BST::contaNodi(TreeNode* r){

    if(r == nullptr){

        return 0;

    }

    return contaNodi(r->getLeft()) + contaNodi(r->getRight()) + 1;

}

BST& BST::operator>>(Product p){

    insert(&root, p);
    return *this;

}

TreeNode* BST::operator%(int codice){

    return search(root, codice);

}

int BST::operator!(){

    return contaNodi(root);

}

void BST::helperPreOrder(){

    preOrderWalk(root);
    cout << endl;

}

void BST::helperPostOrder(){

    postOrderWalk(root);
    cout << endl;

}

void BST::helperInOrder(){

    inOrderWalk(root);
    cout << endl;

}
