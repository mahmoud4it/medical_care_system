#pragma once
#include <iostream>
#include "string"
using namespace std;
class Analysis
{
private:
	int id;
	string name;

	string className;
	string menu;
public:
	Analysis();
	Analysis(const Analysis& orig);
	~Analysis();

	void setID(int i);
	int getID();

	void setName(string n);
	string getName();

	void add();
        string print(string msg="");
        string getClassName();
        string getMenu();
	
};

