#ifndef CSCI_H
#define CSCI_H

#include <iostream>
using namespace std;
#include "University.h"

class CSCI : public University{
// Stores the class number, name, and professor
private:
    string csNum;
    string csTitle;
    string csProf;
public:
    // adds attributes to an instance of the class
    CSCI(University inpClass) : csNum{inpClass.getNum()}, csTitle{inpClass.getTitle()}, csProf{inpClass.getProf()} {}
    // prints info in CSCI order
    void printCS(){
        cout << "CSCI-" << getTitle() << "-" << getNum() << "-" << getProf() << endl;
    }
    string getNum(){return csNum;}
    string getTitle(){return csTitle;}
    string getProf(){return csProf;}
};

#endif
