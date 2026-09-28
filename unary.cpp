#include<iostream>
using namespace std;
class Number
{
public:
int num;
Number(int n)
{
this->num = n;
}
void operator++()
{
num++;
cout<<"Number (Increment)\n"<<num;
}
};
int main()
{
Number n1(10);
++n1;
}
