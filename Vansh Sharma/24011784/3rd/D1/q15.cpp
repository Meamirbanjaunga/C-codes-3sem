#include <iostream>
using namespace std;
class Test {
    int val;
public:
    Test(int v=0) : val(v) {}
    Test operator- () { return Test(-val); }   
    Test operator++ () { ++val; return *this; }
    Test operator++ (int) { Test temp = *this; val++; return temp; }
    Test operator-- () { --val; return *this; }
    Test operator-- (int) { Test temp = *this; val--; return temp; }
    void display() { cout << val << endl; }
};
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