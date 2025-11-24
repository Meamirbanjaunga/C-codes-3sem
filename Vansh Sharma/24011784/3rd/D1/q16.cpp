#include <iostream>
using namespace std;
class Test {
    int val;
public:
    Test(int v=0) : val(v) {}
    friend Test operator- (Test t);
    friend Test operator++ (Test &t);
    friend Test operator++ (Test &t, int);
    friend Test operator-- (Test &t);
    friend Test operator-- (Test &t, int);
    void display() { cout << val << endl; }
};
Test operator- (Test t) { return Test(-t.val); }
Test operator++ (Test &t) { ++t.val; return t; }
Test operator++ (Test &t, int) { Test temp = t; t.val++; return temp; }
Test operator-- (Test &t) { --t.val; return t; }
Test operator-- (Test &t, int) { Test temp = t; t.val--; return temp; }
int main() {
    Test t1(5);
    cout << "Original value: ";
    t1.display();
    Test t2 = -t1;
    cout << "After unary - operator: ";
    t2.display();
    ++t1;
    cout << "After pre-increment operator: ";
    t1.display();
    t1++;
    cout << "After post-increment operator: ";
    t1.display();
    --t1;
    cout << "After pre-decrement operator: ";
    t1.display();
    t1--;
    cout << "After post-decrement operator: ";
    t1.display();

    return 0;
}