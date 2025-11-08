Aim: 
To create a class that represents books and displays their details. 
Algorithm: 
1. Start the program. 
2. Define a class Book with title, author, and price. 
3. Define display() to print details. 
4. In main(), create two objects. 
5. Assign values to each object. 
6. Display using display(). 
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
