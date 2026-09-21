#include<iostream>
using namespace std;
class student
{
int roll;
char name[25];
public:
void getdata()
{
cout<<"\n...............";
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
class studentExam:Public student 
{
public:
int sub1,sub2,sub3,sub4,sub5,sub6;
float per;
public:
void accept_data()
{
getdata();
cout<<"Enter Marks for Subject 1"<<endl;
cin>>sub1;
cout<<"Enter Marks for Subject 2"<<endl;
cin>>sub2;
cout<<"Enter Marks for Subject 3"<<endl;
cin>>sub3;
cout<<"Enter Marks for Subject 4"<<endl;
sin>>sub4;
cout<<"Enter Marks for Subject 5"<<endl;
cin>>sub5;
cout<<"Enter Marks for Subject 6"<<endl;
cin>>sub6;
}
void display_data()
{
putdata();
cout<<"Marks of Subject 1"<<sub1<<endl;
cout<<"Marks of Subject 2"<<sub2<<endl;
cout<<"Marks of Subject 3"<<sub3<<endl;
cout<<"Marks of Subject 4"<<sub4<<endl;
cout<<"Marks of Subject 5"<<sub5<<endl;
cout<<"Marks of Subject 6"<<sub6<<endl;
}
};
class Studentresult: public StudentExam
{
public:
void calculate()
{
per = (sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
cout<<"\n\nTotal Percentage: "<<endl;
cout<<"---------------------------"<<endl;
}
};
int main()
{
Studentresult str;
int cnt,i;
cout<<"Enter No. of student you want: "<<endl;
cin>>cnt;
for(i=0;i<cnt;i++)
{
str.accept_data();
str.display_data();
str.calculate();
}
}

