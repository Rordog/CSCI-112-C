#include <iostream>
#include "Person.h"
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;


int main(void){

    ifstream inpst;
    
    inpst.open("people.txt", ios::in);
    if(!inpst.is_open()){
        cout << "Error: could not open file\n";
        return(1);
    }

    vector<Person> people;
    
    // Turns strings from file to Person classes
    Person p;
    while(inpst >> p){
        people.push_back(p);
    }

    // Counters for all data required in output
    int women = 0;
    int over50 = 0;
    int women406 = 0;
    int over50mont = 0;
    
    // Iterates through vector, increasing counters when someone that matches it is found
    while(!people.empty()){
        p = people.back();
        // Checks for women and women with a 406 area code
        if(p.getGender() == "woman"){
            women++;
            if(p.getArea() == "406"){
                women406++;
            }
        }
        // Checks for people over 50 and people over 50 with a 406 area code
        if(p.getAge() > 50){
            over50++;
            if(p.getArea() == "406"){
                over50mont++;
            }
        }
        people.pop_back();
    }
    
    // Calculates percentages of women with 406 area code
    // and over 50 with 406 area code
    float womenPercent = (float)women406/women * 100;
    float over50percent = (float)over50mont/over50 * 100;

    // Prints all data required
    cout << "Number of women in list: " << women << endl;
    cout << "Number of people over 50 in list: " << over50 << endl;
    cout << "Number of women with 406 area code: " << women406 << endl;
    cout << "Number of people over 50 with 406 area code: " << over50mont << endl;
    cout << "Percentage of women in list with 406 area code: " << fixed << setprecision(2) << womenPercent << "%" << endl;
    cout << "Percentage of people over 50 in list with 406 area code: " << fixed << setprecision(2) << over50percent << "%"  << endl;
    
    return(0);
}
