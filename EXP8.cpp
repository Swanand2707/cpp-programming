#include <iostream>
using namespace std;
class Student {
public:
    int roll;
    string name;
    friend istream& operator>>(istream &in, Student &s) {
        cout << "Enter roll number and name: ";
        in >> s.roll >> s.name;
        return in;
    }
    friend ostream& operator<<(ostream &out, Student &s) {
        out << "Roll Number: " << s.roll << endl;
        out << "Name: " << s.name << endl;
        return out;
    }
};
int main() {
    Student s;
    cin >> s;
    cout << s;
    return 0;
}
