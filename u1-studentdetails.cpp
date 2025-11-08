Aim: 
To develop a class to represent student information and display their details. 
Algorithm: 
1. Start the program. 
2. Define a class Student with data members name, rollNo, and marks. 
3. Define display() to print student information. 
4. In main(), create three objects. 
5. Assign values to each student. 
6. Display the data using display(). 
7. Stop the program. 
program:
#include<iostream>
using namespace std ;
class student 
{
public:
string name;
int rollno ;
float marks;
void display(){
cout<<"name:"<<name<<",roll no:"<<rollno<<",marks:"<<marks<<endl;
}
};
int main(){
student s1,s2,s3;
s1.name="sai",
s1.rollno=127;
s1.marks=51;
s2.name="balaji",
s2.rollno=110;
s2.marks=99;
s3.name="rutwik",
s3.rollno=68;
s3.marks=100;
}
