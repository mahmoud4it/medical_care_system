/* 
 * File:   MedQueue.cpp
 * Author: admin
 * 
 * Created on 20 December 2022, 13.38
 */

#include <iostream>
#include "MedQueue.h"
using namespace std;

template <class Temp>
MedQueue<Temp>::MedQueue(int max) {
    maxSize = max;
    queue = new Temp[maxSize];
    front=0;
    rear=-1;
    count = 0;
}

template <class Temp>
MedQueue<Temp>::MedQueue(const MedQueue<Temp>& orig) {
    maxSize = orig.maxSize;
    front = orig.front;
    rear = orig.rear;
    count = orig.count;
    queue = new Temp[maxSize];
    for(int i=0;i<maxSize;i++)
        queue[i] = orig.queue[i];
}

template <class Temp>
MedQueue<Temp>::~MedQueue() {
    count = 0;
    //maxSize = 0;
    front = 0;
    rear= -1;
    delete [] queue;
    queue = new Temp[maxSize];
    
}

template <class Temp>
void MedQueue<Temp>::enQueue(Temp t) {
    if(isFull()) {
        cout << "Queue Is Full " << endl;
    }else{
        rear = (rear + 1) % maxSize;
        queue[rear] = t;
        count++;
    }
    
}

template <class Temp>
void MedQueue<Temp>::deQueue(Temp &t) {
    if(isEmpty()){
        cout << "Queue Is Empty " << endl;
    }else{
        t = queue[front];
        front = (front +1) % maxSize;
        count--;
    }
}

template <class Temp>
void MedQueue<Temp>::getFrot(Temp &t) const{
    t = queue[front];
}

template <class Temp>
bool MedQueue<Temp>::isEmpty() const{
    return (count == 0);
}

template <class Temp>
bool MedQueue<Temp>::isFull() const{
    return (count == maxSize);
}

template <class Temp>
int MedQueue<Temp>::size() const{
    return count;
}

template <class Temp>
int MedQueue<Temp>::search() const{
}
