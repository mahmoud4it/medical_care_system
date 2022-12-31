#include "Pharmacy.h"

Pharmacy::Pharmacy()
{
	className = "Pharmacy";
}

Pharmacy::Pharmacy(const Pharmacy& orig)
{
	id = orig.id;
	name = orig.name;
	phone = orig.phone;
	address = orig.address;
}

Pharmacy::~Pharmacy()
{
	id = 0;
	name = " " ;
	phone = " ";
	address = " ";
}

void Pharmacy::setID(int i)
{
	id = i;
}

int Pharmacy::getID()
{
	return id;
}

void Pharmacy::setName(string n)
{
	name = n;
}

string Pharmacy::getName()
{
	return name;
}

void Pharmacy::setPhone(string p)
{
	phone = p;
}

string Pharmacy::getPhone()
{
	return phone;
}

void Pharmacy::setAddress(string a)
{
	address = a;
}

string Pharmacy::getAddress()
{
	return address;
}

string Pharmacy::getClassName()
{
	return className;
}

string Pharmacy::getMenu()
{
	menu = ""
		"1- Add " + getClassName() + "\n"
		"2- Find " + getClassName() + " By ID\n"
		"3- Find " + getClassName() + " By Name\n"
		"4- Delete " + getClassName() + "\n"
                "5- " + getClassName() + " Medicine Menu\n"
                "6- Make " + getClassName() + " Orders\n"
		"0- .. Back to Main Menu\n"
		"Please Enter Option Number: ";
	return menu;
}

void Pharmacy::add()
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

string Pharmacy::print(string msg)
{
    if(msg != "") msg = "\t"+msg;
	string data = to_string(id) + "\t " + name + "\t" + phone + "\t" + address  + msg;
	return data;
}
