//
// Created by ASUS on 12/7/2018.
//

#include "Node.h"

Node::Node(int number) {
    this->number = number;
    left = NULL;
    right = NULL;
}

int Node::getHeight() {
    if(left == NULL && right == NULL)
        return 0;
    int PI = 0;
    int PD = 0;
    if(left != NULL)
        PI = left->getHeight();
    if(right != NULL)
        PD = right->getHeight();
    if (PI > PD)
        return(PI+1);
    return(PD+1);
}
