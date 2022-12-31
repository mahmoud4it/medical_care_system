/* 
 * File:   filehandling.h
 * Author: admin
 *
 * Created on 20 December 2022, 17.50
 */

#include <iostream>
#include <fstream> 
#include "string"
//#include "MedLinkedList.h"
using namespace std;

class FileHandling {
public:
    FileHandling();
    FileHandling(const FileHandling& orig);
    ~FileHandling();
    void open(string,ios::openmode);
    void close();
    void save(string);
    void getFile(fstream &,string ,ios::openmode);
    //void read(MedLinkedList &);
private:
    string name;
    fstream file;
};


