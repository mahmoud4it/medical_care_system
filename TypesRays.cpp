#include "TypesRays.h"

TypesRays::TypesRays()
{
    className = "Types of Rays ";
}

TypesRays::TypesRays(const TypesRays& orig)
{
    id = orig.id;
    name = orig.name;
    price = orig.price;
}

TypesRays::~TypesRays()
{
    id = 0;
    name = "";
    price = 0;
}

void TypesRays::setID(int i)
{
    id = i;
}

int TypesRays::getID()
{
    return id;
}

void TypesRays::setName(string n)
{
    name = n;
}

string TypesRays::getName()
{
    return name;
}

void TypesRays::setPrice(int p)
{
    price = p;
}

int TypesRays::getPrice()
{
    return price;
}

void TypesRays::add()
{
    cout << "Please Enter " + getClassName() + " ID: ";
    cin >> id;

    cout << "Please Enter " + getClassName() + " Name: ";
    cin >> name;

    cout << "Please Enter " + getClassName() + " price: ";
    cin >> price;
}

string TypesRays::print(string msg)
{
    if(!msg.empty()) msg = "\t"+msg;
    string data = to_string(id) + "\t" + name + "\t" + to_string(price)  ;
    return data;
}

string TypesRays::getClassName()
{
    return className;
}

string TypesRays::getMenu()
{
    menu = ""
        "1- Add " + getClassName() + "\n"
        "2- Find " + getClassName() + " By ID\n"
        "3- Find " + getClassName() + " By Name\n"
        "4- Delete " + getClassName() + "\n"
        "0- .. Back to Main Menu\n"
        "Please Enter Option Number: ";
    return menu;
}
