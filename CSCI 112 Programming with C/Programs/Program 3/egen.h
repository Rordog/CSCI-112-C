#ifndef EGEN_H
#define EGEN_H

#include <iostream>
using namespace std;
#include "University.h"

class Egen : public University{
// stores the class number, name, and professor
private:
    string egenNum;
    string egenTitle;
    string egenProf;
public:
    // adds attributes to an instance of egen
    Egen(University inpClass) : egenNum{inpClass.getNum()}, egenTitle{inpClass.getTitle()}, egenProf{inpClass.getProf()} {}
    // prints info in egen order
    void printEgen(){
        cout << "EGEN-" << getProf() << "-" << getTitle() << "-" << getNum() << endl;
    }
    string getNum(){return egenNum;}
    string getTitle(){return egenTitle;}
    string getProf(){return egenProf;}
};

#endif
