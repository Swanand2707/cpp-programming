#include<iostream>
using namespace std;
class complex
{
private:
int real,image;
public:
complex(int r=0,int i=0):real(r),image(i){}
complex add(const complex &c)
{
return complex(real+c.real,image+c.image);
}
complex subtract(const complex &c)
{
return complex(real-c.real,image-c.image);
}
void dispaly() const
{
cout<<real<<" +i"<<image<<endl;
}
};
int main()
{
complex c1(4,5),c2(8,9);
complex sum=c1.add(c2);
complex diff=c1.subtract(c2);
cout<<"First complex number: ";c1.dispaly();
cout<<"second complex Number: ";c2.dispaly();
cout<<"Addition:";sum.dispaly();
cout<<"Subtraction: ";diff.dispaly();
return 0;
}
