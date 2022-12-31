/* 
 * File:   MedTempLinkedList.cpp
 * Author: admin
 * 
 * Created on 20 December 2022, 13.36
 */

#include <iostream>
#include "MedLinkedList.h"
using namespace std;

template <class Temp>
MedLinkedList<Temp>::MedLinkedList() {
    head = NULL; 
    cursor = NULL;
    count = 0;
    //cout << "Hello" << endl;
}

template <class Temp>
MedLinkedList<Temp>::MedLinkedList(const MedLinkedList<Temp>& orig) {
    head = orig.head; 
    cursor = orig.cursor;
    count = orig.count;
}

template <class Temp>
MedLinkedList<Temp>::~MedLinkedList() {
    /*head = NULL; 
    cursor = NULL;
    count = 0;*/
    //cout << "bye bye" << endl;
}

template <class Temp>
void MedLinkedList<Temp>::advace() {
    cursor = cursor->next;
}

template <class Temp>
void MedLinkedList<Temp>::toFirst() {
    cursor = head;
}

template <class Temp>
void MedLinkedList<Temp>::insert(Temp t) {
    NodePointer curr = new node;
    curr->temp = t;
    
    if(head == NULL){
        head = curr;
        cursor = head;
    }else{
        cursor = head;
        while(cursor->next != NULL){
            advace();
        }
        cursor->next = curr;
    }
    
    count++;
}

template <class Temp>
void MedLinkedList<Temp>::insertAt() {
    count++;
}

template <class Temp>
void MedLinkedList<Temp>::insertAfter() {
    count++;
}

template <class Temp>
Temp MedLinkedList<Temp>::getTemp(){
    Temp tmp = (Temp) cursor->temp;
    //bool found = false;
    /*
    while(cursor != NULL){
        Temp t = (Temp) cursor->temp;
        int TID = t.getID();
        if(TID == id){
            tmp = t;
            break;
        }
        cursor = cursor->next;
    }*/
    return tmp;
}

template <class Temp>
void MedLinkedList<Temp>::findByID(int id,string msg) {
    cursor = head;
    bool found = false;
    Temp tcl;
    while(cursor != NULL){
        Temp t = (Temp) cursor->temp;
        int TID = t.getID();
        if(TID == id){
            cout << t.print(msg) << endl;
            found = true;
            break;
        }
        cursor = cursor->next;
    }
    if(!found) cout << tcl.getClassName() << " with ID: " << id << " not found!" << endl;
}

template <class Temp>
void MedLinkedList<Temp>::findByID(int id,Temp &temp) {
    cursor = head;
    bool found = false;
    //Temp tcl;
    while(cursor != NULL){
        Temp t = (Temp) cursor->temp;
        int TID = t.getID();
        if(TID == id){
            temp = t;
            break;
        }
        cursor = cursor->next;
    }
    
    //return tcl;
}

template <class Temp>
void MedLinkedList<Temp>::findByID() {
    cursor = head;
    bool found = false;
    int id=-1;
    Temp tcl;
    cout << "Search for "<< tcl.getClassName()<<" by ID" << endl;
    cout << "Please Enter "<< tcl.getClassName()<<" ID: ";
    cin >> id;
    while(cursor != NULL){
        Temp t = (Temp) cursor->temp;
        int TID = t.getID();
        if(TID == id){
            cout << t.print() << endl;
            found = true;
            break;
        }
        cursor = cursor->next;
    }
    if(!found) cout << tcl.getClassName() << " with ID: " << id << " not found!" << endl;
}

template <class Temp>
void MedLinkedList<Temp>::findByName() {
    cursor = head;
    bool found = false;
    string name= "";
    Temp tcl;
    cout << "Search for "<< tcl.getClassName()<<" by Name " << endl;
    cout << "Please Enter "<< tcl.getClassName()<<" name: ";
    cin >> name;
    while(cursor != NULL){
        Temp t = (Temp) cursor->temp;
        string TName = t.getName();
        if(TName == name){
            cout << t.print() << endl;
            found = true;
            break;
        }
        cursor = cursor->next;
    }
    if(!found) cout << tcl.getClassName() << " with Name: " << name << " not found!" << endl;
}

template <class Temp>
void MedLinkedList<Temp>::print() {
    cursor = head;
    while(cursor != NULL){
        Temp t = (Temp) cursor->temp;
        //int id = t.getID();
        //string name = t.getName();
        //cout << "ID: " << id << " -- Name: " << name << endl;
        cout << t.print() << endl;
        cursor = cursor->next;
    }
}

template <class Temp>
void MedLinkedList<Temp>::getCurrent(Temp &temp){
    temp = (Temp) cursor->temp;
}

/*template <class Temp>
void MedLinkedList<Temp>::getData(fstream file) {
    cursor = head;
    while(cursor != NULL){
        string name = t.getName();
        file << t.getData() << "\n";
        cursor = cursor->next;
    }
}*/

template <class Temp>
void MedLinkedList<Temp>::remove() {
    cursor = head;
    NodePointer prev = head;
    
    Temp tcl;
    int id=-1;
    bool found = false;
    
    cout << "Deleting "<< tcl.getClassName()<<" by ID" << endl;
    cout << "Please Enter "<< tcl.getClassName()<<" ID: ";
    cin >> id;
    
    while(cursor != NULL){
        Temp t = (Temp) cursor->temp;
        int TID = t.getID();
        if(TID == id){
        //if(cursor->temp == t){
            NodePointer temp = cursor;
            
            if(temp == head){
                head = head->next;
                cursor = head;
                //prev = head;
            }else{
                prev->next = cursor->next;
                cursor = prev;
            }
            
            delete(temp);
            break;
        }
        prev = cursor;
        cursor = cursor->next;
    }
    count--;
}

template <class Temp>
void MedLinkedList<Temp>::removeAll() {
    cursor = head;    
    while(cursor != NULL){
        head = head->next;
        delete(cursor);
        cursor = head;
    }
    count--;
}

template <class Temp>
int MedLinkedList<Temp>::size(){
    return count;
}

template <class Temp>
bool MedLinkedList<Temp>::isEmpty(){
    return (head == NULL);
}

template <class Temp>
bool MedLinkedList<Temp>::curIsEmpty(){
    return (cursor == NULL);
}