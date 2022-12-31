/* 
 * File:   Category.h
 * Author: admin
 *
 * Created on 21 December 2022, 19.23
 */

#include "string"
using namespace std;


class Category {
public:
    Category();
    Category(const Category& orig);
    ~Category();
    void setID(int);
    int getID();
    void setName(string);
    string getName(); 
    
    
private:
    int cid ;
    string name;

};



