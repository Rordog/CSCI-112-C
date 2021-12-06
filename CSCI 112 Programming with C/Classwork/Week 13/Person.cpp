#include <iostream>
#include <vector>
using namespace std;
#include "Person.h"

string Person::getGender(){
    vector<string> types{"man", "woman", "nonbinary"};
    return types[(int)gen];
}
istream& operator>>(istream &input, Person &p){
    int g;
    input >> p.fn >> p.ln >> p.age >> g;
    p.gen = (Gender)g;
    return input;
}
