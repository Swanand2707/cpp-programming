#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
int hour;
int minute;
int second;
public:
void getdata()
{
cin>>hour>>minute>>second;

}
void add(Time t)
{
int h,m,s;
s=second+t.second;
m=minute+t.minute+s/60;
s=s%60;
h=hour+t.hour+(m/60)+(s/60);
m=m%60;
cout<<"Total time= "<<setfill('0')<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s<<endl;
}
};
int main()
{
Time t1, t2;
cout<<"Enter time 1st: ";
t1.getdata();
cout<<"Enter time 2nd: ";
t2.getdata();
t1.add(t2);
}

