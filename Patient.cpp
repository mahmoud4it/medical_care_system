/* 
 * File:   Patient.cpp
 * Author: admin
 * 
 * Created on 20 December 2022, 14.50
 */

#include <iostream>
#include <vector>
#include "string"
#include "Patient.h"
using namespace std;

Patient::Patient() {
    className="Patient";
}

Patient::Patient(const Patient& orig) {
    id = orig.id;
    age = orig.age;
    name = orig.name;
    phone = orig.phone;
    address = orig.address;
}

Patient::Patient(vector<string> row) {
    //cout << "row[0] : " << row[0] << endl;
    //cout << "row[1] : " << row[1] << endl;
    id = stoi(row[0]);
    age = stoi(row[1]);
    name = row[2];
    phone = row[3];
    address = row[4];
}

Patient::~Patient() {
    id = 0;
    age = 0;
    name = "";
    phone = "";
    address = "";
}

void Patient::setID(int i){
    id = i;
}
int Patient::getID(){
    return id;
}

void Patient::setAge(int i){
    age = i;
}
int Patient::getAge(){
    return age;
}

void Patient::setName(string n){
    name = n;
}

string Patient::getName(){
    return name;
}

void Patient::setPhone(string p){
    phone = p;
}

string Patient::getPhone(){
    return phone;
}


void Patient::setAddress(string a){
    address = a;
}

string Patient::getAddress(){
    return address;
}

void Patient::setData(vector<string> row) {
    id = stoi(row[0]);
    age = stoi(row[1]);
    name = row[2];
    phone = row[3];
    address = row[4];
}

string Patient::getData(){
    string data = to_string(id)+","+to_string(age)+","+name+","+phone+","+address;
    return data;
}

void Patient::add(){
    cout << "Please Enter "+ getClassName()+" ID: ";
    cin >> id;
    
    cout << "Please Enter "+ getClassName()+" Age: ";
    cin >> age;
    
    cout << "Please Enter "+ getClassName()+" Name: ";
    cin >> name;
    
    cout << "Please Enter "+ getClassName()+" Phone: ";
    cin >> phone;
    
    cout << "Please Enter "+ getClassName()+" Address: ";
    cin >> address;
}

string Patient::print(string msg){
    if(msg != "") msg = "\t"+msg;
    string data = to_string(id)+"\t "+to_string(age)+"\t"+name+"\t"+phone+"\t"+address + msg;
    return data;
}

string Patient::getClassName(){
    return className;
}

string Patient::getMenu(){
    menu = ""
            "1- Add "+ getClassName()+"\n"
            "2- Find "+ getClassName()+" By ID\n"
            "3- Find "+ getClassName()+" By Name\n"
            "4- Delete "+ getClassName()+"\n"
            "6- Print "+ getClassName()+" Report\n"
            "0- .. Back to Main Menu\n"
            "Please Enter Option Number: ";
    return menu;
}