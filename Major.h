/* 
 * File:   Major.h
 * Author: admin
 *
 * Created on 20 December 2022, 17.25
 */

#include "string"
using namespace std;

class Major {
public:
    Major();
    Major(const Major& orig);
    ~Major();
    
    void setID(int i);
    int getID();
    
    void setName(string n);
    string getName();
    
    void add();
    string print();
    string getClassName();
    string getMenu();
    
private:
    int id;
    string name;
    string className;
    string menu;
};


