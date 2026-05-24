#include "bst.h"
#include <iostream>
using namespace std;

BST::BST(){

    root = nullptr;

}

BST::~BST(){

    remove(&root);

}

void BST::remove(TreeNode** r){

    if(*r != nullptr){

        remove((*r)->getPtrLeft());
        remove((*r)->getPtrRight());
        delete *r;
        *r = nullptr;

    }

}

void BST::preOrderWalk(TreeNode* r){

    if(r != nullptr){

        cout << " " << r->getInfo().getTarga();
        preOrderWalk(r->getLeft());
        preOrderWalk(r->getRight());

    }

}

void BST::postOrderWalk(TreeNode* r){

    if(r != nullptr){

        postOrderWalk(r->getLeft());
        postOrderWalk(r->getRight());
        cout << " " << r->getInfo().getTarga();

    }

}

void BST::inOrderWalk(TreeNode* r){

    if(r != nullptr){

        inOrderWalk(r->getLeft());
        cout << " " << r->getInfo().getTarga();
        inOrderWalk(r->getRight());

    }

}

void BST::insert(TreeNode** r, Car c){

    if(*r == nullptr){

        *r = new TreeNode(c);

    }else{

        if((*r)->getInfo().getTarga() > c.getTarga()){

            insert((*r)->getPtrLeft(), c);

        }else{

            if((*r)->getInfo().getTarga() < c.getTarga()){

                insert((*r)->getPtrRight(), c);

            }

        }

    }

}

bool BST::search(TreeNode* r, string targaInput){

    if(r == nullptr){

        return false;

    }

    if(r->getInfo().getTarga() == targaInput){

        return true;

    }else{

        if(r->getInfo().getTarga() > targaInput){

            return search(r->getLeft(), targaInput);

        }else{

            return search(r->getRight(), targaInput);

        }


    }

}

void BST::decrementaPrecedenti(TreeNode* r, string targaLimite){

    if(r != nullptr){

        decrementaPrecedenti(r->getLeft(), targaLimite);

        if(r->getInfo().getTarga() < targaLimite){

            double valoreScontato = r->getInfo().getValoreEuro() * 0.95;

            //modifica

        }

        decrementaPrecedenti(r->getRight(), targaLimite);

    }

}

void BST::helperInsert(Car c){

    insert(&root, c);

}

TreeNode* BST::helperSearch(string targaInput){

    search(root, targaInput);

}

void BST::operator--(){

    string targaLimite;

    cout << endl << "Inserisci targa limite: ";
    cin >> targaLimite;

    decrementaPrecedenti(root, targaLimite);

}

void BST::helperPreOrder(){

    preOrderWalk(root);

}

void BST::helperPostOrder(){

    postOrderWalk(root);

}

void BST::helperInOrder(){

    inOrderWalk(root);

}
