//
// Created by ASUS on 12/7/2018.
//

#ifndef ARBOLAVL_NODE_H
#define ARBOLAVL_NODE_H

#include <iostream>

struct Node {
    int number;
    Node* left;
    Node* right;

    Node(int);
    int getHeight();
};


#endif //ARBOLAVL_NODE_H
