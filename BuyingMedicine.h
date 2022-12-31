#pragma once
#include <iostream>
#include "string"
using namespace std;
class BuyingMedicine
{
private:
	int phID;
	int pID;
	int mID;
	int count;

        string date;
        string name;
	string className;
	string menu;
public:
	BuyingMedicine();
	BuyingMedicine(const BuyingMedicine& orig);
	~BuyingMedicine();

	void setID(int i);
	int getID();

	void setPatientID(int i);
	int getPatientID();

	void setMedicineID(int i);
	int getMedicineID();

	void setCount(int i);
	int getCount();
        
        void setDate(string d);
	string getDate();
        
        void setName(string n);
	string getName();

	void add();
        string print(string msg="");
        string getClassName();
        string getMenu();
};

