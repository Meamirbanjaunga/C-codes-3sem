#include <iostream>
#include <string>
using namespace std;
class AreaCalc
{
    public:
        float area(float side);
        float area(float length,float breadth);
        float area(float base,float height,int x);
   
};
int main(){
    AreaCalc a1;int choice,flag=0;float side,length,breadth,base,height;
    while(1){     
        cout<< "\nOptions:\n1- Area of Square\n2- Area of Rectangle\n3- Area of Triangle\n4- Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\nEnter side:";cin>>side;
                cout<<"Area of Square = "<<a1.area(side)<<endl;
                break;
            case 2:
                cout<<"\nEnter length:";cin>>length;
                cout<<"Enter breadth:";cin>>breadth;
                cout<<"Area of Rectangle = "<<a1.area(length,breadth)<<endl;
                break;
            case 3:
                cout<<"\nEnter base:";cin>>base;
                cout<<"Enter height:";cin>>height;
                cout<<"Area of Triangle = "<<a1.area(base,height,1)<<endl;
                break;
            case 4:
                flag=1;
            default:
                cout<<"\nInvalid choice, Please try again."<<endl;
            }  
            if(flag)break;    
    }
}
float AreaCalc::area(float side) {
    return side*side;
}  
float AreaCalc::area(float length,float breadth) {
    return length*breadth;
}
float AreaCalc::area(float base,float height,int x) {
    return 0.5*base*height;
}