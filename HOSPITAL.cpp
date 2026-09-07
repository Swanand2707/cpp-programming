#include <iostream>
using namespace std;

class Patient
{
private:
    string name;
    int age;
    string disease;
    float consultationCharge;

public:
  
    Patient(string n, int a, string d)
    {
        name = n;
        age = a;
        disease = d;
        consultationCharge = 500;
    }

  
    void calculateCharge()
    {
        if (age >= 60)
        {
            consultationCharge = consultationCharge - 100;
        }
    }

    
    void display()
    {
        cout << "\n--- Patient Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
        cout << "Consultation Charge: Rs. "
             << consultationCharge << endl;
    }
};

int main()
{
    Patient p("Rahul", 65, "Fever");

    p.calculateCharge();
    p.display();

    return 0;
}
