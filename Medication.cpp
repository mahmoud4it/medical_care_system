#include "Medication.h"

Medication::Medication()
{
	className = "Medication";
}

Medication::Medication(const Medication& orig)
{
	id = orig.id;
	name = orig.name;
	type = orig.type;
	price = orig.price;
}

Medication::~Medication()
{
	id = 0;
	name = " ";
	type = " ";
	price = 0;
}

void Medication::setID(int i)
{
	id = i;
}

int Medication::getID()
{
	return id;
}

void Medication::setName(string n)
{
	name = n;
}

string Medication::getName()
{
	return name;
}

void Medication::setType(string t)
{
	type = t;
}

string Medication::getType()
{
	return type;
}

void Medication::setPrice(int i)
{
	price = i;
}

int Medication::getPrice()
{
	return price;
}

string Medication::getClassName()
{
	return className;
}

string Medication::getMenu()
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

void Medication::add()
{
	cout << "Please Enter " + getClassName() + " ID: ";
	cin >> id;

	cout << "Please Enter " + getClassName() + " Name: ";
	cin >> name;

	cout << "Please Enter " + getClassName() + " Type: ";
	cin >> type;

	cout << "Please Enter " + getClassName() + " Price: ";
	cin >> price;
}

string Medication::print(string msg)
{
    if(msg != "") msg = "\t"+msg;
	string data = to_string(id) + "\t " + name + "\t" + type + "\t" + to_string(price) + msg;
	return data;
}
