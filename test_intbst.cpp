// testbst.cpp
// Tests intbst.cpp for CS 24 lab

#include "intbst.h"

#include <iostream>
using namespace std;

int getTest();

// creates two trees (one of which is empty),
// and does some simple tests of tree methods
int main() {

    IntBST bst;

   //insert tests
    bst.insert(30);
    bst.insert(23);
    bst.insert(2);
    bst.insert(200);
    bst.insert(5);
    bst.insert(437);
    bst.insert(100);
    bst.insert(12);
    bst.insert(44);
    bst.insert(72);
    bst.insert(24);

    cout << "inserting duplicate 12" << endl;
    if(!bst.insert(12)){
        cout << "test passed" << endl;
    }
    else{
        cout << "test failed" << endl;
    }

    cout << "inserting non duplicate 15" << endl;
    if(bst.insert(15)){
        cout << "test passed" << endl;
    }
    else{
        cout << "test failed" << endl;
    }

    //printing tests
    cout << "PreOrder: ";
    bst.printPreOrder();
    cout << endl;

    cout << "InOrder: ";
    bst.printInOrder();
    cout << endl;

    cout << "PostOrder: ";
    bst.printPostOrder();
    cout << endl;

    //sum and count tests

    cout << "Sum of bst: " << bst.sum() << endl;
    cout << "Count of bst: " << bst.count() << endl;
    
    //contain tests

    cout << "Test if contain function correctly shows that the bst contains 15" << endl;
    if(bst.contains(15)){
        cout << "test passed" << endl;
    }
    else{
        cout << "test failed" << endl;
    }

    cout << "Test if contain function correctly shows that the bst does not contain 436" << endl;
    if(!bst.contains(436)){
        cout << "test passed" << endl;
    }
    else{
        cout << "test failed" << endl;
    }

    //predecessor tests

    cout << "predecessor of 30: " << bst.getPredecessor(30) << endl;

    cout << "test if there is no predecessor" << endl;
    if(bst.getPredecessor(2) == 0){
        cout << "test passed" << endl;
    }
    else{
        cout << "test failed" << endl;
    }

    //successor tests

    cout << "successor of 30: " << bst.getSuccessor(30) << endl;
    
    cout << "test if there is no successor" << endl;
    if(bst.getSuccessor(437) == 0){
        cout << "test passed" << endl;
    }
    else{
        cout << "test failed" << endl;
    }

    //remove tests
    
    cout << "remove node with no child" << endl;
    bst.remove(72);
    cout << "does it still contain 72" << endl;
    if (!bst.contains(72)){
       cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    cout << "bst after removal" << endl;
    bst.printInOrder();
    cout << endl;

    cout << "remove node with one child" << endl;
    bst.remove(12);
    cout << "does it still contain 12" << endl;
    if (!bst.contains(12)){
       cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    cout << "bst after removal" << endl;
    bst.printInOrder();
    cout << endl;



    cout << "remove node with two child" << endl;
    bst.remove(30);
    cout << "does it still contain 30" << endl;
    if (!bst.contains(30)){
       cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    cout << "bst after removal" << endl;
    bst.printInOrder();
    cout << endl;



    



    return 0;    
}