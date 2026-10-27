#include<iostream>
using namespace std;

class result
{
public:
void calculateAverage(int a, int b)
{
cout<<(a+b)/2.0<<endl;
}
void calculateAverage(int a, int b, int c)
{
cout<<(a+b+c)/3.0<<endl;
}
void calculateAverage(float a, float b)
{
cout<<(a+b)/2<<endl;
}
};
int main()
{
result r;
r.calculateAverage(70,80);
r.calculateAverage(70,80,90);
r.calculateAverage(75.5f,85.5f);
return 0;
}
