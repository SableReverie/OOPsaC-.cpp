#include <iostream>
using namespace std;

class Employee {
      public:
      string name;
      string company;
      int age;
      
      void IntroduceYourself(){
          cout << "Name: " << name << '\n';
          cout << "Company: " << company << '\n';
          cout << "Age: " << age << '\n';
      }
      Employee(string name, string company, int age){
          this->name = name;
          this->company = company;
          this->age = age;
      }
};
int main (){
 
    Employee employee1 = Employee("Prince", "Gian", 18);
    employee1.IntroduceYourself();
    
    Employee employee2 = Employee("Gian", "Prince", 18);
    employee2.IntroduceYourself();
    
    return 0;
}
