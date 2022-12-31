/* 
 * File:   MedTempStack.cpp
 * Author: admin
 * 
 * Created on 20 December 2022, 13.36
 */

#include <iostream>
#include <string>
#include "MedStack.h"
using namespace std;

template <class Temp>
MedStack<Temp>::MedStack(int max) {
    top = NULL;
    count=0;
    maxSize=max;
}

template <class Temp>
MedStack<Temp>::MedStack(const MedStack<Temp>& orig) {
    top = orig.top;
    count= orig.count;
    maxSize=orig.maxSize;
}

template <class Temp>
MedStack<Temp>::~MedStack() {
    NodePointer cursor;
    while(top !=NULL){
        cursor = top;
        top = top->next;
        delete cursor;
        count--;
    }
    top = NULL;
    count=0;
    maxSize=0;
}

template <class Temp>
void MedStack<Temp>::push(Temp t){
    if(!isFull()){
        NodePointer curr = new node;
        curr->temp = t;
        curr->next = top;
        top = curr;
        
        count++;
    }else{
        cout << "Stack Is Full";
    }
}

template <class Temp>
void MedStack<Temp>::pop(Temp &t){
    if(!isEmpty()){
        NodePointer cursor = top;
        t= top->temp;
        top = top->next;
        delete cursor;
        count--;
    }else{
        cout << "Stack Is Empty";
    }
}

template <class Temp>
void MedStack<Temp>::getTop(Temp &t) const{
    if(!isEmpty()){
        t = top->temp;
    }
}

template <class Temp>
int MedStack<Temp>::size() const{
    return count;
}
template <class Temp>
bool MedStack<Temp>::isFull() const{
    return (count >= maxSize);
}

template <class Temp>
bool MedStack<Temp>::isEmpty() const{
    return (count == 0);
}

