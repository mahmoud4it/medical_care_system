#include "Specialty.h"

Specialty::Specialty()
{
	className = "Specialty";
}

Specialty::Specialty(const Specialty& orig)
{
	id = orig.id;
	name = orig.name;
}

Specialty::~Specialty()
{
	id = 0;
	name = " ";
}

void Specialty::setID(int i)
{
	id = i;
}

int Specialty::getID()
{
	return id;
}

void Specialty::setName(string n)
{
	name = n;
}

string Specialty::getName()
{
	return name;
}

string Specialty::getClassName()
{
	return className;
}

void Specialty::add()
{
	cout << "Please Enter " + getClassName() + " ID: ";
	cin >> id;

	cout << "Please Enter " + getClassName() + " Name: ";
	cin >> name;
}

string Specialty::print(string msg)
{
    if(msg != "") msg = "\t"+msg;
    string data = to_string(id) + "\t " + name + msg;
    return data;
}

string Specialty::getMenu(){
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
