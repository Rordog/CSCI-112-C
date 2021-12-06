#ifndef BIOLOGY_H
#define BIOLOGY_H

#include <iostream>
using namespace std;
#include "University.h"


class Biology : public University{
// Stores the class number, name, and professor
private:
    string bioNum;
    string bioTitle;
    string bioProf;
public:
    // Adds attributes to a class instance
    Biology(University inpClass) : bioNum{inpClass.getNum()}, bioTitle{inpClass.getTitle()}, bioProf{inpClass.getProf()}{}
    // Prints info in biology order
    void printbio(){
        cout << "BIOB-" << getNum() << "-" << getTitle() << "-" << getProf() << endl;
    }
    string getNum(){return bioNum;}
    string getTitle(){return bioTitle;}
    string getProf(){return bioProf;}

};

#endif
