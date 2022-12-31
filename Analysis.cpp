#include "Analysis.h"

Analysis::Analysis()
{
	className = "Analysis";
}

Analysis::Analysis(const Analysis& orig)
{
	id = orig.id;
	name = orig.name;
}

Analysis::~Analysis()
{
	id = 0;
	name = "";
}

void Analysis::setID(int i)
{
	id = i;
}

int Analysis::getID()
{
	return id;
}

void Analysis::setName(string n)
{
	name = n;
}

string Analysis::getName()
{
	return name;
}

void Analysis::add()
{
	cout << "Please Enter " + getClassName() + " ID: ";
	cin >> id;

	cout << "Please Enter " + getClassName() + " Name: ";
	cin >> name;
}

string Analysis::print(string msg)
{
    if(msg != "") msg = "\t"+msg;
	string data = to_string(id) + "\t" + name  + msg;
	return data;
}

string Analysis::getClassName()
{
	return className;
}

string Analysis::getMenu()
{
	menu = ""
		"1- Add " + getClassName() + " Order\n"
		"2- Find " + getClassName() + " Order By ID\n"
		"3- Find " + getClassName() + " Order By Name\n"
		"4- Delete " + getClassName() + "\n"
		"0- .. Back to Main Menu\n"
		"Please Enter Option Number: ";
	return menu;
}
