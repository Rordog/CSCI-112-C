#ifndef SEMESTER_H
#define SEMESTER_H

#include <iostream>
#include <vector>
using namespace std;
#include "biology.h"
#include "csci.h"
#include "egen.h"


class Semester {
// Creates the storage for class data
private:
    vector<Biology> bioc;
    vector<CSCI> CSClass;
    vector<Egen> egenc;

public:
    // Creates functions used in main to run menu
    void read(ifstream&);
    void printAll(string type);
    void printClass(string type, string classNum);
};
#endif
