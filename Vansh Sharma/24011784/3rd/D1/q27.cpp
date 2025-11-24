#include <iostream>
using namespace std;

template <class T>
class List {
    T a[100];
    int size;
public:
    List() : size(0) {}
    void insert(T val) { a[size++] = val; }
    void remove() { if(size > 0) size--; }
    void display() { for(int i=0;i<size;i++) cout << a[i] << " "; cout << endl; }
};
int main() {
    List<int> intList;
    intList.insert(10);
    intList.insert(20);
    intList.insert(30);
    cout << "Integer List: ";
    intList.display();
    intList.remove();
    cout << "After removing an element: ";
    intList.display();

    List<float> floatList;
    floatList.insert(1.1);
    floatList.insert(2.2);
    floatList.insert(3.3);
    cout << "Float List: ";
    floatList.display();
    floatList.remove();
    cout << "After removing an element: ";
    floatList.display();

    return 0;
}