#ifndef PERSON_H
#define PERSON_H
using namespace std;
using std::string;

class Person{
private:
    string name;
    int age;
public:
    Person():name{"none"}, age{0} {}
    Person(string n, int a) : name{n}, age{a}{}
    void setName(string word) {name = word;}
    void setAge(int years){age = years;}
    string getName(){return name;}
    int getAge(){return age;}


};
#endif
