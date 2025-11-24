#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class TollBooth{
    private:
        unsigned int totalcars;
        double totalmoney;
    public:
    TollBooth(){totalcars=0;totalmoney=0;}
    void payingCar(); 
    void nonPayCar();
    void display();
};
int main(){
    TollBooth booth;
    char ch;
    cout << "Press 'p' for Paying Car\n";
    cout << "Press 'n' for Non-Paying Car\n";
    cout << "Press ESC to Display and Exit\n";

    while (true) {
        ch = _getch();  
        if (ch == 27) { 
            break;
        }
        else if (ch == 'p' || ch == 'P') {
            booth.payingCar();
            cout << "Paying car recorded.\n";
        }
        else if (ch == 'n' || ch == 'N') {
            booth.nonPayCar();
            cout << "Non-paying car recorded.\n";
        }
        else {
            cout << "Invalid input! Use 'p', 'n' or ESC.\n";
        }
    }

    booth.display();
    return 0;
    
}

void TollBooth::payingCar() {
    totalcars++;
    totalmoney+=0.5;
}
void TollBooth::nonPayCar() {
    totalcars++;
}
void TollBooth::display() {
    cout<<"Total Cars: "<<totalcars<<endl<<"Total Money: "<<totalmoney<<endl;
}