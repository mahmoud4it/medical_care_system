#pragma once
#include <iostream>
#include "string"
using namespace std;
class RaysReservation
{
private:
	int rID;
	int pID;
	int tID;
	string date;

        string name;
	string className;
	string menu;
public:
	RaysReservation();
	RaysReservation(const RaysReservation& orig);
	~RaysReservation();

	void setID(int i);
	int getID();

	void setPatientID(int i);
	int getPatientID();

	void setTypesID(int i);
	int getTypeID();

	void setDate(string d);
	string getDate();
        
        void setName(string n);
        string getName();

	void add();
	string print(string msg="");
	string getClassName();
	string getMenu();



};

