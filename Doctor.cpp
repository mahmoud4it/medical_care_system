/* 
 * File:   Doctor.cpp
 * Author: admin
 * 
 * Created on 20 December 2022, 17.11
 */

#include <iostream>
#include "string"
#include "Doctor.h"
using namespace std;

Doctor::Doctor() {
    className="Doctor";
}

Doctor::Doctor(const Doctor& orig) {
    id = orig.id;
    specialtyID = orig.specialtyID;
    name = orig.name;
    phone = orig.phone;
    address = orig.address;
}

Doctor::~Doctor() {
    id = 0;
    specialtyID = 0;
    name = "";
    phone = "";
    address = "";
}

void Doctor::setID(int i){
    id = i;
}
int Doctor::getID(){
    return id;
}

void Doctor::setSpecialtyID(int i)
{
	specialtyID = i;
}

int Doctor::getSpecialtyID()
{
	return specialtyID;
}

void Doctor::setName(string n){
    name = n;
}

string Doctor::getName(){
    return name;
}

void Doctor::setPhone(string p){
    phone = p;
}

string Doctor::getPhone(){
    return phone;
}


void Doctor::setAddress(string a){
    address = a;
}

string Doctor::getAddress(){
    return address;
}

void Doctor::add(){
    cout << "Please Enter "+ getClassName()+" ID: ";
    cin >> id;
    
    cout << "Please Enter "+ getClassName()+" Specialty ID: ";
    cin >> specialtyID;
    
    cout << "Please Enter "+ getClassName()+" Name: ";
    cin >> name;
    
    cout << "Please Enter "+ getClassName()+" Phone: ";
    cin >> phone;
    
    cout << "Please Enter "+ getClassName()+" Address: ";
    cin >> address;
}

string Doctor::print(string msg){
    if(msg != "") msg = "\t"+msg;
    string data = to_string(id)+"\t "+to_string(specialtyID) +"\t "+name+"\t "+phone+"\t "+address  + msg;
    return data;
}

string Doctor::getClassName(){
    return className;
}

string Doctor::getMenu(){
    menu = ""
            "1- Add "+ getClassName()+"\n"
            "2- Find "+ getClassName()+" By ID\n"
            "3- Find "+ getClassName()+" By Name\n"
            "4- Delete "+ getClassName()+"\n"
            "5- "+ getClassName()+" Specialty\n"
            "0- .. Back to Main Menu\n"
            "Please Enter Option Number: ";
    return menu;
}