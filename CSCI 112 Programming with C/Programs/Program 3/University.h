#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <vector>
using namespace std;

class University{

// Info used by child classes
protected:
    string type;
    string num;
    string title;
    string prof;
public: 
    void SetFromCsvLine(string);
    University(): type{"none"}, num{"0"}, title{"none"}, prof{"none"} {}
    University(string typ, string cnum, string ctitle, string cprof) : type{typ}, num{cnum}, title{ctitle}, prof{cprof} {}
    string getType(){return type;}
    string getNum(){return num;}
    string getTitle(){return title;}
    string getProf(){return prof;}
};
#endif
