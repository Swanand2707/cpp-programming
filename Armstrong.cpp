#include<iostream>
#include<cmath>
using namespace std:
int main()
{
int a,rem;
int armN=0;
cout<<"Enter a Number:";
cin>>a;
int original=a;
while(a!=0)
{
rem=a%10;
armN=armN+pow(rem,3);
a=a/10;
}
cout<<"sum="<<armN<<endl;
if(armN==original)
{
cout<<"Armstrong!";
}
else
{
cout<<"Non Armstrong!";
}
}
