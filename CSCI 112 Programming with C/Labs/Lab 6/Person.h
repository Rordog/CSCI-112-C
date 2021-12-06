#ifndef PERSON_H
#define PERSON_H
using namespace std;
using std::string;

// Creates the enum Gender
enum class Gender{man, woman, nonbinary};

class Person{
    
    // All the data attributes for each person
    private:
        string fn;
        string ln;
        int age;
        Gender gen;
        string area;
    
    // Associated methods for creating and getting data of a person
    public:
        Person():fn{"none"}, ln{"none"}, age{0} {}
        int getAge(){return age;}
        string getGender();
        string getArea(){return area;}
        friend istream& operator>>(istream&, Person&);

};
#endif
