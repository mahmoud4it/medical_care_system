/* 
 * File:   filehandling.cpp
 * Author: admin
 * 
 * Created on 20 December 2022, 17.50
 */

#include <fstream> 
#include <vector>
#include "MedLinkedList.h"
#include "filehandling.h"

FileHandling::FileHandling() {
}

FileHandling::FileHandling(const FileHandling& orig) {
}

FileHandling::~FileHandling() {
}

void FileHandling::open(string name,ios::openmode mode) { //write (ios::out | ios::app) read (ios::in)
    file.open(name, mode);
}

void FileHandling::close() {
    file.close();
}

void FileHandling::save(string data) {
    file << data;
}

void getFile(fstream &file,string name,ios::openmode mode){
    file.open(name, mode);
}

/*template <class Temp>
void FileHandling::read(MedLinkedList &list) {
    // Get the roll number
    // of which the data is required
    int count = 0;

    // Read the Data from the file
    // as String Vector
    vector<string> row;
    string line, word, tmp;

    while (file >> tmp) {
            row.clear();
            // read an entire row and
            // store it in a string variable 'line'
            getline(file, line);

            // used for breaking words
            stringstream s(line);

            // read every column data of a row and
            // store it in a string variable, 'word'
            while (getline(s, word, ', ')) {
                    // add all the column data
                    // of a row to a vector
                    row.push_back(word);
            }
            Temp temp = new Temp(row);
            //temp.setData(row);
            list.insert(temp);

    }
    if (count == 0)
            cout << "Record not found\n";

}*/

