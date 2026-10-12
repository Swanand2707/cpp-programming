#include <iostream>
using namespace std;

class Employee
{
protected:
    float salary;

public:
    Employee(float s)
    {
        salary = s;
    }

    virtual void calculateBonus()
    {
        cout << "Employee Bonus" << endl;
    }
};

class Manager : public Employee
{
public:
    Manager(float s) : Employee(s)
    {
    }

    void calculateBonus() override
    {
        float bonus1 = salary * 0.20;
        cout << "Manager Bonus = " << bonus1 << endl;
    }
};

class Developer : public Employee
{
public:
    Developer(float s) : Employee(s)
    {
    }

    void calculateBonus() override
    {
        float bonus2 = salary * 0.10;
        cout << "Developer Bonus = " << bonus2 << endl;
    }
};

int main()
{
    Manager m(50000);
    Developer d(40000);

    Employee *e;

    e = &m;
    e->calculateBonus();

    e = &d;
    e->calculateBonus();

    return 0;
}
