#include <iostream>
using namespace std;
class Base {
private:
    int private_var;
    void private_func() {
        cout << "  Base::private_func() called" << endl;
    }
protected:
    int protected_var;
    void protected_func() {
        cout << "  Base::protected_func() called" << endl;
    }
public:
    int public_var;
    void public_func() {
        cout << "  Base::public_func() called" << endl;
    }
    Base() : private_var(1), protected_var(10), public_var(100) {}
    void display_base_members() {
        cout << "\n--- Inside Base::display_base_members() ---" << endl;
        cout << "  Base can access its own members:" << endl;
        cout << "  private_var: " << private_var << endl;
        cout << "  protected_var: " << protected_var << endl;
        cout << "  public_var: " << public_var << endl;
        private_func();
        protected_func();
        public_func();
        cout << "------------------------------------------" << endl;
    }
};
class DerivedPublic : public Base {
public:
    void access_base_members() {
        cout << "\n--- Inside DerivedPublic::access_base_members() ---" << endl;
        cout << "  public_var: " << public_var << endl;
        public_func();
        cout << "  protected_var: " << protected_var << endl;
        protected_func();
        cout << "  Base's private members are inaccessible." << endl;
        cout << "-----------------------------------------------" << endl;
    }
};
class DerivedProtected : protected Base {
public:
    void access_base_members() {
        cout << "\n--- Inside DerivedProtected::access_base_members() ---" << endl;
        
        cout << "  public_var: " << public_var << endl;
        public_func();
        cout << "  protected_var: " << protected_var << endl;
        protected_func();
        cout << "  Base's private members are inaccessible." << endl;
        cout << "--------------------------------------------------" << endl;
    }
};
class DerivedPrivate : private Base {
public:
    void access_base_members() {
        cout << "\n--- Inside DerivedPrivate::access_base_members() ---" << endl;
        cout << "  public_var: " << public_var << endl;
        public_func();
        cout << "  protected_var: " << protected_var << endl;
        protected_func();
        cout << "  Base's private members are inaccessible." << endl;
        cout << "------------------------------------------------" << endl;
    }
};
int main() {
    cout << "--- Testing Accessibility from outside the classes ---" << endl;
    cout << "\n1. Public Inheritance (objPub):" << endl;
    DerivedPublic objPub;
    cout << "  Accessing objPub.public_var: " << objPub.public_var << endl;
    objPub.public_func();
    objPub.access_base_members();
    cout << "\n2. Protected Inheritance (objProt):" << endl;
    DerivedProtected objProt;
    objProt.access_base_members();
    cout << "\n3. Private Inheritance (objPriv):" << endl;
    DerivedPrivate objPriv;
    objPriv.access_base_members();
    return 0;
}