#include <iostream>
#include <string>
using namespace std;
int main(){
    int unit;float amount=0;string name;
    cout<< "Enter the name: ";getline(cin,name);
    cout<<"Enter Total Units: ";cin>>unit;
    if(unit<=100)amount=0.60*unit;
    else if(unit>100&& unit<=300)
        amount=(0.60*100)+((unit-100)*0.80);
    else if(unit>300)
        amount=(0.60*100)+(0.80*200)+((unit-300)*.90);
    if(amount>300)amount=1.15*amount;
    if(amount<50)amount=50;
    cout<<"Name -"<<name<<endl;
    cout<<"Total Amount=> "<<amount;
    return 0;
}
printf("Hello, World!");