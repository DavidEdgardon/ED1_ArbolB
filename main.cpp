
#include <iostream>
#include <conio.h>
#include "Tree.h"

using namespace std;

int main() {
    Tree tree;
    tree.addNode(5);
    tree.addNode(4);
    tree.addNode(3);
    tree.addNode(6);
    tree.addNode(9);
    tree.addNode(1);
    cout << "Altura del arbol: " << tree.getHeight() << endl;
    cout << "Arbol's size: " << tree.getSize() << endl;
    cout << "Recorrido preOrden:" << endl;
    tree.preOrden();
    cout << "Recorrido inOrden:" << endl;
    tree.inOrden();
    cout << "Recorrido postOrden:" << endl;
    tree.postOrden();
    cout << "Hojas del arbol:" << endl;
    tree.printHojas();
    tree.deleteNode(3);
    cout << "Recorrido preOrden:" << endl;
    tree.preOrden();
    cout << "Recorrido inOrden:" << endl;
    tree.inOrden();
    cout << "Recorrido postOrden:" << endl;
    tree.postOrden();
    cout << "Hojas del arbol:" << endl;
    tree.printHojas();

    cout<<"Nivel"<<endl;
    int n;
    cin>>n;
    tree.printGivenLevel(n);
    cout<<endl<<"--------"<<endl;
    tree.printLevelOrder();
    getch();
}