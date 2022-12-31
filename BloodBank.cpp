#include "BloodBank.h"

BloodBank::BloodBank()
{
    className = "Blood Bank";
}

BloodBank::BloodBank(const BloodBank& orig)
{
    id = orig.id;
    name = orig.name;
    phone = orig.phone;
    address = orig.address;
}

BloodBank::~BloodBank()
{
    id = 0;
    name = "";
    phone = "";
    address = "";
}

void BloodBank::setID(int i)
{
    id = i;
}

int BloodBank::getID()
{
    return id;
}

void BloodBank::setName(string n)
{
    name = n;
}

string BloodBank::getName()
{
    return name;
}

void BloodBank::setPhone(string p)
{
    phone = p;
}

string BloodBank::getPhone()
{
    return phone;
}

void BloodBank::setAddress(string a)
{
    address = a;
}

string BloodBank::getAddress(string a)
{
    return address;
}

void BloodBank::add()
{
    cout << "Please Enter " + getClassName() + " ID: ";
    cin >> id;

    cout << "Please Enter " + getClassName() + " Name: ";
    cin >> name;

    cout << "Please Enter " + getClassName() + " Phone: ";
    cin >> phone;

    cout << "Please Enter " + getClassName() + " Address: ";
    cin >> address;
}

string BloodBank::print(string msg)
{
    if(!msg.empty()) msg = "\t"+msg;
    string data = to_string(id) + "\t" + name + "\t" + phone + "\t" + address;
    return data;
}

string BloodBank::getClassName()
{
    return className;
}

string BloodBank::getMenu()
{
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
