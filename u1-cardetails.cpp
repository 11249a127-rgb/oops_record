#include<iostream>
using namespace std;
class car{
public:
string model;
string company;
int price;
void display() {
cout<<"Model:"<<model<<"Company:"<<company<<"price:Rs."<<price<<endl;
}
};
int main() {
car c1,c2;
c1.model = "hyundai";
c1.company = "creta";
c1.price= 300000;
c2.model = "toyato";
c2.company = "innova";
c2.price = 400000;
c1.display();
c2.display();
return 0;
}
