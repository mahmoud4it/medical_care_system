#include "Hospital.h"

Hospital::Hospital()
{
	className = "Hospital";
}


Hospital::Hospital(const Hospital& orig)
{
    id = orig.id;
    name = orig.name;
    phone = orig.phone;
    address = orig.address;
}
Hospital::~Hospital() {
    id = 0;
    name = "";
    phone = "";
    address = "";
}

void Hospital::setID(int i) {
    id = i;
}

int Hospital::getID() {
    return id;
}

void Hospital::setName(string n) {
    name = n;
}
string Hospital::getName() {
    return name;
}

void Hospital::setPhone(string p) {
    phone = p;
}
string Hospital::getPhone() {
    return phone;
}

void Hospital::setAddress(string a) {
    address = a;
}
string Hospital::getAddress() {
    return address;
}



void Hospital::add() {
    cout << "Please Enter " + getClassName() + " ID: ";
    cin >> id;

    cout << "Please Enter " + getClassName() + " Name: ";
    cin >> name;

    cout << "Please Enter " + getClassName() + " Phone: ";
    cin >> phone;

    cout << "Please Enter " + getClassName() + " Address: ";
    cin >> address;
}

string Hospital::print(string msg) {
    if(!msg.empty()) msg = "\t"+msg;
    string data = to_string(id) + "\t" + name + "\t" + phone + "\t" + address + msg;
    return data;
}

string Hospital::getClassName() {
    return className;
}

string Hospital::getMenu() {
    menu = ""
        "1- Add " + getClassName() + "\n"
        "2- Find " + getClassName() + " By ID\n"
        "3- Find " + getClassName() + " By Name\n"
        "4- Delete " + getClassName() + "\n"
        "5- " + getClassName() + " Reservation\n"
        "0- .. Back to Main Menu\n"
        "Please Enter Option Number: ";
    return menu;
}


