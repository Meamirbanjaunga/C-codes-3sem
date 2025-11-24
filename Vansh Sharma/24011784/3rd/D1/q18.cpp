#include <iostream>
class A {
public:
    void func(int &val) {
        val *= 2;
    }
};
class B {
public:
    void func(int &val) {
        val *= 3;
    }
};
class C {
public:
    void func(int &val) {
        val *= 5;
    }
};
class D : public A, public B, public C {
private:
    int val;
    int countA;
    int countB;
    int countC;
public:
    D() {
        val = 1;
        countA = 0;
        countB = 0;
        countC = 0;
    }
    void update_val(int new_val) {
        int temp = new_val;
        while (temp % 2 == 0) {
            A::func(val); 
            countA++;
            temp /= 2;
        }
        while (temp % 3 == 0) {
            B::func(val); 
            countB++;
            temp /= 3;
        }
        while (temp % 5 == 0) {
            C::func(val); 
            countC++;
            temp /= 5;
        }
    }
    void print_counts() {
        std::cout << "A's func called " << countA << " times" << std::endl;
        std::cout << "B's func called " << countB << " times" << std::endl;
        std::cout << "C's func called " << countC << " times" << std::endl;
    }
    int get_val() {
        return val;
    }
};
int main() {
    int new_val = 30;
    D d_obj;
    d_obj.update_val(new_val);
    d_obj.print_counts();
    return 0;
}