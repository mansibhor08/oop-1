include<iostream>
using namespace std;
class university
{
public:
string name;
int age;
long int contact;
void info()
{
cout<<"--COMMON DETAILS--"<<endl;
}
};
class student:public university
{
public:
int rollno;
string branch;

void display()
{
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Contact: "<<contact<<endl;
cout<<"Roll no: "<<rollno<<endl;
cout<<"Branch: "<<branch<<endl;
}
};
int main()
{
student s1;

s1.name= "Mansi";
s1.age = 17;
s1.contact= 9011122233;

s1.info();

s1.rollno = 39;
s1.branch = "aiml";

s1.display();

return 0;
}
