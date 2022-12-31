/* 
 * File:   Category.cpp
 * Author: admin
 * 
 * Created on 21 December 2022, 19.23
 */

#include "Category.h"

Category::Category() {
}

Category::Category(const Category& orig) {
}

Category::~Category() {
}

void Category::setID(int i){
    cid=i;
}

int Category::getID(){
    return cid;
}

void Category::setName(string c){
    name=c;
}                      
string Category::getName(){
    return name;
}

