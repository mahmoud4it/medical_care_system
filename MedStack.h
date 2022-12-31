/* 
 * File:   MedTempStack.h
 * Author: admin
 *
 * Created on 20 December 2022, 13.36
 */

//#include "node.h"

template <class Temp>

class MedStack {
public:
    MedStack(int max=5);
    MedStack(const MedStack<Temp>& orig);
    ~MedStack();
    void push(Temp );
    void pop(Temp &);
    int size() const;
    void getTop(Temp &) const;
    bool isFull() const;
    bool isEmpty() const;
private:
    class node {
    public:
        Temp temp;
        node *next;
    private:

    };
    typedef node * NodePointer;
    NodePointer top;
    int count,maxSize;

};


