/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/
/*
#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}
*/


#include<iostream>

using namespace std;


int main()
{

  int salary,type,ot;

  cout<<"ENTER SALARY::";
  cin>>salary;
  cout<<"ENETR OT TIME::";
  cin>>ot;
  cout<<"ENTER THE TYPE::";
  cin>>type;


  switch(type){
    case 1: 
      cout<<"YOU selected type 1";
      ot=ot*1000;
    break;
    case 2:
      cout<<"You selected type 2";
      ot=ot*1500;
    break;
    default:
      cout<<"You selected type 3";
      ot=ot*1700;
    break;
    
  }
cout<<"Salary="<<salary<<endl<<"Type="<<type<<endl<<"OT_charge="<<ot<<endl<<endl<<endl<<"NET SALARY::"<<salary+ot;


  
  return 0;
}