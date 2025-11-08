Aim: 
To implement a class Account that stores customer account details. 
Algorithm: 
1. Start the program. 
2. Define a class Account with accNo, name, and balance. 
3. Define a function display() to show account details. 
4. In main(), create two Account objects. 
5. Assign values to data members. 
6. Display the details. 
7. Stop the program.
program:
#include<iostream>
using namespace std ;
class Account 
{
public:
int acc No;
string name ;
float balance;
void display(){
cout<<"Account No:"<<accNo<<",Name:"<<name<<",balance:"<<balance<<endl;
}
};
int main(){
Account a1,a2;
a1.accNo=110;
a1.name="balaji";
a1.balance=51;
a2.accNo=127;
a2.name="sai";
a2.balance=99;
a1.display();
a2.display();
}
