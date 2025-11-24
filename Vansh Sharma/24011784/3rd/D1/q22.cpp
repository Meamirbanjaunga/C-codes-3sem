#include <iostream>
#include <cmath>
using namespace std;
class CAL_AREA {
public:
    float r, h;
    virtual void getdata() { }
    virtual void display_volume() = 0;
};
class Cone : public CAL_AREA {
public:
    void getdata() { cin >> r >> h; }
    void display_volume() { cout << (1.0/3 * M_PI * r*r * h) << endl; }
};
class Hemisphere : public CAL_AREA {
public:
    void getdata() { cin >> r; }
    void display_volume() { cout << (2.0/3 * M_PI * r*r*r) << endl; }
};
class Cylinder : public CAL_AREA {
public:
    void getdata() { cin >> r >> h; }
    void display_volume() { cout << (M_PI * r*r*h) << endl; }
};
int main() {
    CAL_AREA* shape1;
    CAL_AREA* shape2;
    CAL_AREA* shape3;
    Cone cone;
    Hemisphere hemi;
    Cylinder cyl;
    shape1 = &cone;
    shape2 = &hemi;
    shape3 = &cyl;
    cout << "Enter radius and height of cone: ";
    shape1->getdata();
    cout << "Volume of Cone: ";
    shape1->display_volume();
    cout << "Enter radius of hemisphere: ";
    shape2->getdata();
    cout << "Volume of Hemisphere: ";
    shape2->display_volume();
    cout << "Enter radius and height of cylinder: ";
    shape3->getdata();
    cout << "Volume of Cylinder: ";
    shape3->display_volume();
    return 0;
}