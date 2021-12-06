#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;
#include "Semester.h"

// Error if file doesn't open
void error(string s){
    throw runtime_error("ERROR: " + s);
}


int main(void){

    Semester s;
    // Opens the file
    ifstream inpfile;
    inpfile.open("classes.csv", ios::in);
    if(!inpfile.is_open()){
        string errmsg = "Unable to open input file";
        error(errmsg);
    }

    s.read(inpfile);
    // User menu options
    char menuInput;
    string input1;
    string input2;
    do{
        cout << "Choices:" << endl;
        cout << "n - print class given number" << endl;
        cout << "t - print all classes for a given type" << endl;
        cout << "q - quit" << endl;
        cin >> menuInput;
        
        switch(menuInput){
            case 'n':
                // Prints the info for one class
                cout << "Enter class type and class number (ex: CSCI 112): ";
                cin >> input1 >> input2;
                s.printClass(input1, input2);
                break;
            case 't':
                // Prints all the data of one class type
                cout << "Enter type (CSCI, EGEN, or BIOB): ";
                cin >> input1;
                s.printAll(input1);
                break;
            case 'q':
                break;
        }
    }while(menuInput != 'q');

    return(0);

}
