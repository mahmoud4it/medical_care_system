#pragma once
#include <iostream>
#include "string"
using namespace std;
class Medication
{
private:
	int id;
	string name;
	string type;
	int price;

	string className;
	string menu;
public:
	Medication();
	Medication(const Medication& orig);
	~Medication();

	void setID(int i);
	int getID();

	void setName(string n);
	string getName();

	void setType(string t);
	string getType();

	void setPrice(int i);
	int getPrice();

	string getClassName();
	string getMenu();
	void add();
	string print(string msg="");


};

