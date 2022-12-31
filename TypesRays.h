#include <iostream>
#include "string"
using namespace std;
class TypesRays
{
private:
	int id;
	string name;
	int price;

	string className;
	string menu;

public:
	TypesRays();
	TypesRays(const TypesRays& orig);
	~TypesRays();

	void setID(int i);
	int getID();

	void setName(string n);
	string getName();

	void setPrice(int p);
	int getPrice();

	void add();
	string print(string msg="");
	string getClassName();
	string getMenu();
};

