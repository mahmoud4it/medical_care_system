/* 
 * File:   SubCategory.h
 * Author: admin
 *
 * Created on 21 December 2022, 20.36
 */

#include "string"
using namespace std;

class SubCategory {
public:
    SubCategory();
    SubCategory(const SubCategory& orig);
    virtual ~SubCategory();
    void setID(int);
    int getID();
    void setName(string);
    string getName();
    void setCategory(int);
    int getCategory();
    
private:
    int id;
    int cid;
    string name;
    
    
};


