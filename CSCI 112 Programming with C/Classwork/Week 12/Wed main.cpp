#include <iostream>
#include "Person.h"
using namespace std;

int main(void){
    Person p1;
    p1.setName("Steve");
    p1.setAge(23);

    Person p2{"Tom", 28};

    cout << "P1 is named " << p1.getName() << " and is " << p1.getAge() << " years old\n";
    cout << "P2 is named " << p2.getName() << " and is " << p2.getAge() << " years old\n";
    
    return(0);
}
