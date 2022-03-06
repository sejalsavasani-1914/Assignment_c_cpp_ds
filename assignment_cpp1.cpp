#include<iostream>
using namespace std;


class Employee
{
public:
 int salary;
 int no_of_hours;

 void getinfo()
 {
  cout << "Please, enter the salary of employee: ";
  cin >> salary;
  cout << "Please, enter the number of hours of employee: ";
  cin >> no_of_hours;
 }

 void AddSal()
 {
  if(salary < 500)
   salary += 10;
 }

 void AddWork()
 {
  if(no_of_hours > 6)
   salary += 5;
 }

 void DisplaySalary()
 {
  cout << salary << endl;
 }


};


int main()
{
Employee obj;
cout<<"Enter the required details to find final salary of Employee:\n"<<endl;

obj.getinfo();
obj.AddSal();
obj.AddWork();


cout << "\nThe final salary of employee is: ";
obj.DisplaySalary();
}