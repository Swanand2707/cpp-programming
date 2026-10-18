#include <iostream>
using namespace std;
class Matrix {
public:
    int a[2][2];
    void input() {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j]
                  }
 void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    Matrix operator+(Matrix &m) {
        Matrix t;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                t.a[i][j] = a[i][j] + m.a[i][j];
        return t;
    }
    Matrix operator-(Matrix &m) {
        Matrix t;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                t.a[i][j] = a[i][j] - m.a[i][j];
        return t;
    }
   bool operator==(Matrix &m) {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                if (a[i][j] != m.a[i][j])
                    return false;
        return true;
    }
};
int main() {
    Matrix m1, m2, m3;

    cout << "Enter first matrix:\n";
    m1.input();

    cout << "Enter second matrix:\n";
    m2.input();

    m3 = m1 + m2;
    cout << "\nAddition:\n";
    m3.display();

    m3 = m1 - m2;
    cout << "\nSubtraction:\n";
    m3.display();

    if (m1 == m2)
        cout << "Matrices are equal";
    else
        cout << "Matrices are not equal";

    return 0;
}
