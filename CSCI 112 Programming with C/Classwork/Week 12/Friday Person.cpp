#include <iostream>
using namespace std;
#include "Person.h"

istream& operator>>(istream &input, Person &p){
    input >> p.fn >> p.ln >> p.age;
    return input;
}
