#include <iostream>
using namespace std;

  class Employee {
    public:
    string name;
    int year;
    string salary;
    string address;
  };

int main() {
  Employee employeeObj1;
  employeeObj1.name = "Robert";
  employeeObj1.year = 2018;
  employeeObj1.salary = "£25000";
  employeeObj1.address = "64C London Street";

  Employee employeeObj2;
  employeeObj2.name = "Farah";
  employeeObj2.year = 2015;
  employeeObj2.salary = "£35000";
  employeeObj2.address = "68D Bristol Road";

  Employee employeeObj3;
  employeeObj3.name = "Satinder";
  employeeObj3.year = 2019;
  employeeObj3.salary = "£32500";
  employeeObj3.address = "26B Salt Street";

  cout << employeeObj1.name << "\n" << employeeObj1.year << "\n" << employeeObj1.salary << "\n" << employeeObj1.address << "\n\n";
  cout << employeeObj2.name << "\n" << employeeObj2.year << "\n" << employeeObj2.salary << "\n" << employeeObj2.address << "\n\n";
  cout << employeeObj3.name << "\n" << employeeObj3.year << "\n" << employeeObj3.salary << "\n" << employeeObj3.address << "\n";

  return 0;
}