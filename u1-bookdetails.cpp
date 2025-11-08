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
using namespace std;
class book{
public:
string title;
string author;
int price;
void display() {
cout<<"Title:"<<title<<"Author:"<<author<<"price:Rs."<<price<<endl;
}
};
int main() {
book b1,b2;
b1.title = "spiderman";
b1.author = "stan lee";
b1.price= 300000;
b2.title= "batman";
b2.author = "christopher nolan";
b2.price = 400000;
b1.display();
b2.display();
return 0;
}
