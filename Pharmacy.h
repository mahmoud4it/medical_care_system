#pragma once
#include <iostream>
#include "string"
using namespace std;
class Pharmacy
{
private:
	int id;
	string name;
	string phone;
	string address;
	
	string className;
	string menu;
public:
	Pharmacy();
	Pharmacy(const Pharmacy& orig);
	~Pharmacy();

	void setID(int i);
	int getID();

	void setName(string n);
	string getName();

	void setPhone(string p);
	string getPhone();

	void setAddress(string a);
	string getAddress();

	void add();
        string print(string msg="");
        string getClassName();
        string getMenu();
};

