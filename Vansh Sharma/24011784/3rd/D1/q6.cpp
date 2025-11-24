#include <iostream>
#include <string>
using namespace std;
class Hotel
{
private:
    string Name;
    int Rno;
    float Tariff;
    int NOD;
public:
    float CALC();
    void Checkin(int Rno,string Name,float Tariff,int NOD);
    void Checkout();
    
};
float Hotel::CALC(){
    float result=Tariff*NOD;
    if(result>10000) result=(1.05*NOD)*Tariff;
    return result;
}
void Hotel::Checkin(int Rno,string Name,float Tariff,int NOD){
    this ->Rno=Rno;
    this ->Name=Name;
    this ->Tariff=Tariff;
    this ->NOD=NOD;
    
}

void Hotel::Checkout(){
    cout << "R.no.= " << Rno
     << "\nName= " << Name
     << "\nTariff: " << Tariff
     << "\nNOD= " << NOD
     << "\nAmount= " << CALC()
     << endl;

    
}

int main(){
    int choice;Hotel h1;
    string Name;int Rno, NOD;float Tariff;
    
    while(1){     
        cout<< "\nOptions:\n1 - Checkin\n2 - Calc\n3 - Checkout\n4 - Exit\n: ";
        cin>>choice;
        
    if(choice==1){
        cin.ignore();
        cout <<"Enter Name: ";
        getline(cin,Name);
        cout <<"Enter Rno: ";cin >>Rno;
        cout <<"Enter NOD: ";cin >>NOD;
        cout <<"Enter Tariff: ";cin >>Tariff;
        
        
        h1.Checkin(Rno,Name,Tariff,NOD);
    }
    else if(choice==2)
        cout<< "Amount= "<<h1.CALC();
        
    else if(choice==3)
        h1.Checkout();
        
    else if(choice==4)
        exit(1);
    
    else
        cout <<"***Enter a Valid choice***";
    }
}
