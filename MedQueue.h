/* 
 * File:   MedQueue.h
 * Author: admin
 *
 * Created on 20 December 2022, 13.38
 */

//#include "node.h"

template <class Temp>

class MedQueue {
public:
    MedQueue(int max=5);
    MedQueue(const MedQueue<Temp>& orig);
    ~MedQueue();
    void enQueue(Temp);
    void deQueue(Temp &);
    void getFrot(Temp &) const;
    bool isEmpty() const;
    bool isFull() const;
    int size() const;
    int search() const;
private:
    Temp *queue;
    int front,rear,count,maxSize;
};


