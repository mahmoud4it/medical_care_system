
#include "Lab.h"

Lab::Lab()
{
	className = "Lab";
}

Lab::Lab(const Lab& orig)
{
    id = orig.id;
    name = orig.name;
    phone = orig.phone;
    address = orig.address;
}

Lab::~Lab()
{
    id = 0;
    name="";
    phone="";
    address="";
}

void Lab::setID(int i)
{
    id = i;
}

int Lab::getID()
{
    return id;
}

void Lab::setName(string n)
{
    name = n;
}

string Lab::getName()
{
    return name;
}

void Lab::setPhone(string p)
{
    phone = p;
}

string Lab::getPhone()
{
    return phone;
}

void Lab::setAddress(string a)
{
    address = a;
}

string Lab::getAddress(string a)
{
    return address;
}

void Lab::add()
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

string Lab::print(string msg)
{
    if(msg != "") msg = "\t"+msg;
    string data = to_string(id) + "\t" + name + "\t" + phone + "\t" + address + msg;
    return data;
}

string Lab::getClassName()
{
    return className;
}

string Lab::getMenu()
{
    menu = ""
        "1- Add " + getClassName() + "\n"
        "2- Find " + getClassName() + " By ID\n"
        "3- Find " + getClassName() + " By Name\n"
        "4- Delete " + getClassName() + "\n"
        "5- " + getClassName() + " Analysis\n"
        "6- List " + getClassName() + " Analysis\n"
        "0- .. Back to Main Menu\n"
        "Please Enter Option Number: ";
    return menu;
}
