#ifndef PERSON_H
#define PERSON_H
using namespace std;
using std::string;

enum class Gender{man, woman, nonbinary};
class Person{
private:
    string fn;
    string ln;
    int age;
    Gender gen;
public:
    Person():fn{"none"},ln{"none"}, age{0} {}
    Person(string first, string last , int a) : fn{first}, ln{last}, age{a}{}
    string getName(){return fn + " " + ln;}
    int getAge(){return age;}
    string getGender();
    friend istream& operator>>(istream&, Person&);

};
#endif
