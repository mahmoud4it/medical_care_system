/* 
 * File:   Major.cpp
 * Author: admin
 * 
 * Created on 20 December 2022, 17.25
 */

#include <iostream>
#include "Major.h"
using namespace std;

Major::Major() {
    className="Major";
}

Major::Major(const Major& orig) {
    id = orig.id;
    name = orig.name;
}

Major::~Major() {
    id = 0;
    name = "";
}

void Major::setID(int i){
    id = i;
}

int Major::getID(){
    return id;
}

void Major::setName(string n){
    name = n;
}

string Major::getName(){
    return name;
}

void Major::add(){
    cout << "Please Enter "+ getClassName()+" ID: ";
    cin >> id;
    
    cout << "Please Enter "+ getClassName()+" Name: ";
    cin >> name;

}

string Major::print(){
    string data = to_string(id)+"\t "+name+"\t";
    return data;
}

string Major::getClassName(){
    return className;
}

string Major::getMenu(){
    menu = ""
            "1- Add "+ getClassName()+"\n"
            "2- Find "+ getClassName()+" By ID\n"
            "3- Find "+ getClassName()+" By Name\n"
            "4- Delete "+ getClassName()+"\n"
            "0- .. Back to Main Menu\n"
            "Please Enter Option Number: ";
    return menu;
}