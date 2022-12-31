/* 
 * File:   MedTempLinkedList.h
 * Author: admin
 *
 * Created on 20 December 2022, 13.36
 */

#include <iostream>
//#include "node.h"
using namespace std;

template <class Temp>

class MedLinkedList {
public:
    MedLinkedList();
    MedLinkedList(const MedLinkedList<Temp>& orig);
    ~MedLinkedList();
    void advace();
    void toFirst();
    void getCurrent(Temp &);
    void insert(Temp);
    void insertAt();
    void insertAfter();
    void findByID();
    void findByID(int id,string msg="");
    void findByID(int id,Temp &);
    void findByName();
    void remove();
    void removeAll();
    void print();
    
    Temp getTemp();
    int size();
    bool isEmpty();
    bool curIsEmpty();
private:
    class node {
    public:
        Temp temp;
        node *next;
    private:

    };
    typedef node * NodePointer;
    NodePointer head,cursor;
    //Node * head,cursor;
    int count;
};


