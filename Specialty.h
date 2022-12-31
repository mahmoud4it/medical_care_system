#pragma once
#include <iostream>
#include "string"
using namespace std;
class Specialty
{
private:
	int id;
	string name;

	string className;
	string menu;
public:

	Specialty();
	Specialty(const Specialty& orig);
	~Specialty();

	void setID(int i);
	int getID();

	void setName(string n);
	string getName();

	
	void add();
        string print(string msg="");
        string getClassName();
        string getMenu();
};

