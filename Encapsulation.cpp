//ENCAPSULATION = Encapsulation means combining data and the functions that work on that data into a single unit, like a class. In Object-Oriented Programming, it helps keep things organized and secure.

//  For example, think of a company with different departments—finance, sales, and accounts. Each department handles its own tasks and data. The finance department deals only with financial records, and the sales department handles only sales. Just like that, in programming, each class manages its own data and operations, keeping everything separate and protected. That's encapsulation.


#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
    string name;
    string company;
    int age;
    
    public:
    void IntroduceYourself(){
        cout << "Name: " << Name << '\n';
        cout << "Company: " << Company << '\n';
        cout << "Age: " << Age << '\n';
    }
    Employee(String name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main () {
    
    Employee employee1 = Employee("Prince", "****", 18);
    employee.IntroduceYourself();
    
  return 0;
}
