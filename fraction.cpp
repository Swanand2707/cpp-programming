#include <iostream>

class Fraction {
private:
    int num;  // Numerator
    int den;  // Denominator (Note: 'demo' in notes usually stands for denominator)

public:
    // Function to take input from the user
    void input() {
        std::cout << "Enter numerator: ";
        std::cin >> num;
        std::cout << "Enter denominator: ";
        std::cin >> den;
        
        // Prevent division by zero
        while (den == 0) {
            std::cout << "Denominator cannot be zero. Enter again: ";
            std::cin >> den;
        }
    }

    // Function to add two fractions: (a/b) + (c/d) = (a*d + c*b) / (b*d)
    Fraction add(const Fraction& other) {
        Fraction result;
        result.num = (this->num * other.den) + (other.num * this->den);
        result.den = this->den * other.den;
        return result;
    }

    // Function to subtract two fractions: (a/b) - (c/d) = (a*d - c*b) / (b*d)
    Fraction sub(const Fraction& other) {
        Fraction result;
        result.num = (this->num * other.den) - (other.num * this->den);
        result.den = this->den * other.den;
        return result;
    }

    // Function to display the fraction in num/den format
    void display() const {
        std::cout << num << "/" << den;
    }
};

int main() {
    Fraction f1, f2, resultAdd, resultSub;

    std::cout << "--- Enter First Fraction ---\n";
    f1.input();

    std::cout << "\n--- Enter Second Fraction ---\n";
    f2.input();

    // Perform Addition
    resultAdd = f1.add(f2);
    std::cout << "\nAddition Result: ";
    f1.display();
    std::cout << " + ";
    f2.display();
    std::cout << " = ";
    resultAdd.display();
    std::cout << "\n";

    // Perform Subtraction
    resultSub = f1.sub(f2);
    std::cout << "Subtraction Result: ";
    f1.display();
    std::cout << " - ";
    f2.display();
    std::cout << " = ";
    resultSub.display();
    std::cout << "\n";

    return 0;
}
