#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void get_data() { cin >> x >> y; }
    virtual void display_area() {}
};

class Triangle : public Shape {
public:
    void display_area() { cout << "Area: " << (0.5 * x * y) << endl; }
};

class Rectangle : public Shape {
public:
    void display_area() { cout << "Area: " << (x * y) << endl; }
};
int main() {
    Shape* shape1;
    Shape* shape2;
    Triangle tri;
    Rectangle rect;

    shape1 = &tri;
    shape2 = &rect;

    cout << "Enter base and height of triangle: ";
    shape1->get_data();
    shape1->display_area();

    cout << "Enter length and breadth of rectangle: ";
    shape2->get_data();
    shape2->display_area();

    return 0;
}