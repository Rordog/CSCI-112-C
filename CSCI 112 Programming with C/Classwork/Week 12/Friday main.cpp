#include <iostream>
#include "Person.h"
#include <fstream>
#include <vector>
using namespace std;

int main(void){

    ifstream inpst;
    
    inpst.open("/public/c++/name_agein.txt", ios::in);
    if(!inpst.is_open()){
        cout << "Error: could not open file\n";
        return(1);
    }

    vector<Person> people;

    Person p;
    while(inpst >> p){
        people.push_back(p);
    }

    while(!people.empty()){
        p = people.back();
        cout << "Name: " << p.getName() << " Age: " << p.getAge() << endl;
        people.pop_back();
    }    
    
    return(0);
}
