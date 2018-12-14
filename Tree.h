//
// Created by ASUS on 12/7/2018.
//

#ifndef ARBOLAVL_TREE_H
#define ARBOLAVL_TREE_H

#include <iostream>
#include "Node.h"


class Tree {
private:
    Node *root;

    //funciones privadas del arbol
    void addNode(Node*, Node**);
    //la siguiente funcion se ocupara para borrar un nodo
    Node* minValueNode(Node*);
    Node* deleteNode(int, Node*);
    void preOrden(Node*);
    void inOrden(Node*);
    void postOrden(Node*);
    int getHeight(Node*);
    void printHojas(Node*);
    int getSize(Node*);
    void printLevelOrder( Node* );
    void printGivenLevel( Node*, int);

    //funciones para balancear el arbol
    void balance(Node**);
    void leftRotate(Node**);
    void rightRotate(Node**);
    void leftDoubleRotate(Node**);
    void rightDoubleRotate(Node**);
public:
    Tree();
    void addNode(int);
    Node* deleteNode(int);
    void preOrden();
    void inOrden();
    void postOrden();
    int getHeight();
    void printGivenLevel(int);
    void printLevelOrder();
    int getSize();;
    void printHojas();
};

#endif //ARBOLAVL_TREE_H
