#include <iostream>
using namespace std;
#include "Person.h"
#include <vector>

// Returns the gender as a string
string Person::getGender(){
    vector<string> types{"man", "woman", "nonbinary"};
    return types[(int)gen];
}

// Gets the data from the file and assigns appropriate values to person attributes
istream& operator>>(istream &input, Person &p){
    int g;
    string a;
    input >> p.fn >> p.ln >> p.age >> g >> a;
    p.gen = (Gender)g;
    string asub = a.substr(0, 3);
    p.area = asub;
    return input;
}
