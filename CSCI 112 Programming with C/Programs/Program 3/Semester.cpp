#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
#include "Semester.h"

// Reads the file and adds line their associated classes
void Semester::read(ifstream& ifs){
    string inpline;

    while(getline(ifs, inpline)){
        University one_class;
        one_class.SetFromCsvLine(inpline);

        if (one_class.getType() == "EGEN") {
            Egen one_egen(one_class);
            egenc.push_back(one_egen);
        }
        else if(one_class.getType() == "CSCI"){
            CSCI one_csci(one_class);
            CSClass.push_back(one_csci);
        }
        else{
            Biology one_bio(one_class);
            bioc.push_back(one_bio);
        }
    }
}

// Prints all info of a class type
void Semester::printAll(string type){
    if(type == "BIOB"){
        for(int i = 0; i < bioc.size(); i++){
            Biology b = bioc[i];
            b.printbio();
        }
    }
    else if(type == "CSCI"){
        for(int i = 0; i < CSClass.size(); i++){
            CSCI c = CSClass[i];
            c.printCS();
        }
    }
    else if(type == "EGEN"){
        for(int i = 0; i < egenc.size(); i++){
            Egen e = egenc[i];
            e.printEgen();
        }
    }
    else{
        cout << "Unrecognized class type" << endl;
    }


}

// Prints the info of one class
// If the type matches a class, will iterate through that class to find an instance with the same class number
void Semester::printClass(string type, string classNum){
    if(type == "BIOB"){
        for(int i = 0; i < bioc.size(); i++){
            Biology b = bioc[i];
            if(b.getNum() == classNum){
                b.printbio();
            }
        }
    }
    else if(type == "CSCI"){
        for(int i = 0; i < CSClass.size(); i++){
            CSCI c = CSClass[i];
            if(c.getNum() == classNum){
                c.printCS();
            }
        }
    }
    else if(type == "EGEN"){
        for(int i = 0; i < egenc.size(); i++){
            Egen e = egenc[i];
            if(e.getNum() == classNum){
                e.printEgen();
            }
        }
    }
    else{
        cout << "Unrecognized class type" << endl;
    }

}
