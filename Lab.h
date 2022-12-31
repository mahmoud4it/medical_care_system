
#include <iostream>
#include "string"
using namespace std;

class Lab
{
private:
    int id;
    string name;
    string phone;
    string address;

    string className;
    string menu;

public:
    Lab();
    Lab(const Lab& orig);
    ~Lab();

    void setID(int i);
    int getID();

    void setName(string n);
    string getName();

    void setPhone(string p);
    string getPhone();

    void setAddress(string a);
    string getAddress(string a);

    void add();
    string print(string msg="");
    string getClassName();
    string getMenu();


};
