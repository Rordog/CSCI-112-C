#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
#include "University.h"

// Breaks apart a line and returns the attributes needed 
void University::SetFromCsvLine(string inpl){
    istringstream line(inpl);

    // get type
    getline(line, type, ' ');

    // get class number
    getline(line, num, ',');
    
    // get class name
    getline(line, title, ',');

    // get prof
    getline(line, prof, ',');
}
