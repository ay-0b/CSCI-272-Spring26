#include <iostream>
using namespace std;
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee: public AbstractEmployee{
private:
    int Age;
    string Company;
protected:
    string Name;
public:
    void setName(string name){
    Name = name;
    }
    string getName(){
    return Name;
    }
    void setAge(int age){
    if(age>=18)
    Age = age;
    }
    int getAge(){
    return Age;
    }
    void setCompany(string company){
    Company = company;
    }
    string getCompany(){
    return Company;
    }
    void IntroduceYourself(){
        cout << "Name - " << Name << endl;
        cout << "Age - " << Age << endl;
        cout << "Company - " << Company << endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Age = age;
        Company = company;
    }
    void AskForPromotion(){
        if(Age>=30)
            cout << Name << " got promoted" << endl;
        else
            cout << Name << " did not get promoted" << endl;
    }
    virtual void Work(){
        cout << Name << " is checking emails, task backlog, performing tasks..." << endl;
    }
};
class Teacher: public Employee{
public:
    string Subject;
    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson " << endl;
    }
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work(){
        cout << Name << " is teaching " << Subject << endl;
    }
};
class Developer: public Employee {
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favprogramminglanguage)
    : Employee (name, company, age)
    {
        FavProgrammingLanguage = favprogramminglanguage;
    }
    void FixBug(){
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
    void Work(){
        cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
    }
};
int main(){
    Developer d("Ayoub", "John Jay", 20, "C++");
    Teacher t("Gal", "I.S.141", 30, "Math");

    Employee* e1=&d;
    Employee* e2=&t;

    e1->Work();
    e2->Work();
}