#include "Rays.h"

Rays::Rays()
{
    className = "Rays";
}

Rays::Rays(const Rays& orig)
{
    id = orig.id;
    name = orig.name;
    phone = orig.phone;
    address = orig.address;
}

Rays::~Rays()
{
    id = 0;
    name = "";
    phone = "";
    address = "";
}

void Rays::setID(int i)
{
    id = i;
}

int Rays::getID()
{
    return id;
}

void Rays::setName(string n)
{
    name = n;
}

string Rays::getName()
{
    return name;
}

void Rays::setPhone(string p)
{
    phone = p;
}

string Rays::getPhone()
{
    return phone;
}

void Rays::setAddress(string a)
{
    address = a;
}

string Rays::getAddress(string a)
{
    return address;
}

void Rays::add()
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

string Rays::print(string msg)
{
    if(!msg.empty()) msg = "\t"+msg;
    string data = to_string(id) + "\t" + name + "\t" + phone + "\t" + address;
    return data;
}

string Rays::getClassName()
{
    return className;
}

string Rays::getMenu()
{
    menu = ""
        "1- Add " + getClassName() + "\n"
        "2- Find " + getClassName() + " By ID\n"
        "3- Find " + getClassName() + " By Name\n"
        "4- Delete " + getClassName() + "\n"
        "5- " + getClassName() + " Types\n"
        "6- " + getClassName() + " Reservation\n"
        "0- .. Back to Main Menu\n"
        "Please Enter Option Number: ";
    return menu;
}