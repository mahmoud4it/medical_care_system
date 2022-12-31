#include "BuyingMedicine.h"

BuyingMedicine::BuyingMedicine()
{
	className = "Medicine";
}

BuyingMedicine::BuyingMedicine(const BuyingMedicine& orig)
{
	phID = orig.phID;
	pID = orig.pID;
	mID = orig.mID;
	count = orig.count;
}

BuyingMedicine::~BuyingMedicine()
{
	phID = 0;
	pID = 0;
	mID = 0;
	count = 0;
}

void BuyingMedicine::setID(int i)
{
	phID = i;
}

int BuyingMedicine::getID()
{
	return phID;
}

void BuyingMedicine::setPatientID(int i)
{
	pID = i;
}

int BuyingMedicine::getPatientID()
{
	return pID;
}

void BuyingMedicine::setMedicineID(int i)
{
	mID = i;
}

int BuyingMedicine::getMedicineID()
{
	return mID;
}

void BuyingMedicine::setCount(int i)
{
	count = i;
}

int BuyingMedicine::getCount()
{
	return count;
}

string BuyingMedicine::getClassName()
{
	return className;
}

void BuyingMedicine::setDate(string d)
{
	date = d;
}

string BuyingMedicine::getDate()
{
	return date;
}

void BuyingMedicine::setName(string n){
    name = n;
}

string BuyingMedicine::getName(){
    return name;
}

string BuyingMedicine::getMenu()
{
	menu = ""
		"1- Make Order\n"
		"2- Find Order By ID\n"
		"3- Find  Order By Name\n"
		"4- Delete Order\n"
		"0- .. Back to Main Menu\n"
		"Please Enter Option Number: ";
	return menu;
}

void BuyingMedicine::add()
{
	cout << "Please Enter Pharmacy ID: ";
	cin >> phID;
	cout << "Please Enter Patient ID: ";
	cin >> pID;
	cout << "Please Enter Medicine ID: ";
	cin >> mID;
	cout << "Please Enter Medicine count: ";
	cin >> count;
        cout << "Please Enter Clinic Reservation Date: ";
	cin >> date;

}

string BuyingMedicine::print(string msg)
{
    if(msg != "") msg = "\t"+msg;
	string data = to_string(phID) + "\t " + to_string(pID) + "\t" + to_string(mID) + "\t" + to_string(count) + msg;
	return data;
}
