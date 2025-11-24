#include <iostream>
using namespace std;

class Complex {
    int real, img;
public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {}
    Complex operator + (Complex const &obj) {
        return Complex(real + obj.real, img + obj.img);
    }
    Complex operator - (Complex const &obj) {
        return Complex(real - obj.real, img - obj.img);
    }
    bool operator == (Complex const &obj) {
        return (real == obj.real) && (img == obj.img);
    }
    void display() { cout << real << " + " << img << "i" << endl; }
};
int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    cout << "c1 + c2 = ";
    c3.display();
    cout << "c1 - c2 = ";
    c4.display();
    if (c1 == c2)
        cout << "c1 and c2 are equal." << endl;
    else
        cout << "c1 and c2 are not equal." << endl;

    return 0;
}
