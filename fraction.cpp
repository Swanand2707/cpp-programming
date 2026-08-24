#include <iostream>
using namespace std;
class Fraction {
private:
    int num;
    int den;
public:
    void input() {
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> den;
        while (den == 0) {
            cout << "Denominator cannot be zero. Enter again: ";
            cin >> den;
        }
    }
    Fraction add(const Fraction& other) {
        Fraction result;
        result.num = (this->num * other.den) + (other.num * this->den);
        result.den = this->den * other.den;
        return result;
    }

    Fraction sub(const Fraction& other) {
        Fraction result;
        result.num = (this->num * other.den) - (other.num * this->den);
        result.den = this->den * other.den;
        return result;
    }
    void display() const {
        cout << num << "/" << den;
    }
};

int main() {
    Fraction f1, f2, resultAdd, resultSub;

    std::cout << "--- Enter First Fraction ---\n";
    f1.input();

    std::cout << "\n--- Enter Second Fraction ---\n";
    f2.input();

    resultAdd = f1.add(f2);
    cout << "\nAddition Result: ";
    f1.display();
    cout << " + ";
    f2.display();
    cout << " = ";
    resultAdd.display();
    cout << "\n";
    
    resultSub = f1.sub(f2);
    cout << "Subtraction Result: ";
    f1.display();
    cout << " - ";
    f2.display();
    cout << " = ";
    resultSub.display();
    cout << "\n";

    return 0;
}
