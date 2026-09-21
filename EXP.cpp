#include<iostream>
using namespace std;
class student
{
int roll;
char name[25];
public:
void getdata()
{
cout<<"..............."<<endl;
cout<<"Enter Roll Number: ";
cin>>roll;
cout<<"\nEnter Student name: ";
cin>>name;
}
void putdata()
{
cout<<"\n......................"<<endl;
cout<<"*****Student Marklist"<<endl;
cout<<"......................"<<endl;
cout<<"Roll No: "<<roll<<endl;
cout<<"Student Name"<<name<<endl;
}
};
class StudentExam:public student 
{
public:
int sub1,sub2,sub3,sub4,sub5,sub6;
float per;
public:
void accept_data()
{
getdata();
cout<<"\nEnter Marks for Subject 1 :";
cin>>sub1;
cout<<"\nEnter Marks for Subject 2 :";
cin>>sub2;
cout<<"\nEnter Marks for Subject 3: ";
cin>>sub3;
cout<<"\nEnter Marks for Subject 4: ";
cin>>sub4;
cout<<"\nEnter Marks for Subject 5: ";
cin>>sub5;
cout<<"\nEnter Marks for Subject 6: ";
cin>>sub6;
}
void display_data()
{
putdata();
cout<<"Marks of Subject 1: "<<sub1<<endl;
cout<<"Marks of Subject 2: "<<sub2<<endl;
cout<<"Marks of Subject 3: "<<sub3<<endl;
cout<<"Marks of Subject 4: "<<sub4<<endl;
cout<<"Marks of Subject 5: "<<sub5<<endl;
cout<<"Marks of Subject 6: "<<sub6<<endl;
}
};
class Studentresult: public StudentExam
{
public:
void calculate()
{
per = (sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
cout<<"\n\nTotal Percentage: "<<per<<"%"<<endl;
cout<<"---------------------------"<<endl;
}
};
int main()
{
Studentresult str;
int cnt,i;
cout<<"Enter No. of student you want: ";
cin>>cnt;
for(i=0;i<cnt;i++)
{
str.accept_data();
str.display_data();
str.calculate();
}
}
