#include<iostream>
using namespace std;
class person
{
public:
string name;
int age;

void showperson()
{
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
}
};

class employee:public person
{
public:
int emp_id;
string department;

void showemployee()
{
cout<<"Employee id: "<<emp_id<<endl;
cout<<"Department: "<<department<<endl;
}
};

class manager:public employee
{
public:
long int contactno;

void showmanager()
{
cout<<"Contact number: "<<contactno<<endl;
}
};

int main()
{
manager m1;
m1.name = "abc";
m1.age = 40;
m1.showperson();
m1.emp_id = 9983;
m1.department = "xzy";
m1.showemployee();
m1.contactno = 1234567890;
m1.showmanager();
return 0;
}
