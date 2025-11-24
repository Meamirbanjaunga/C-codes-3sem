#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    string Name;
    int Ano;
    string Type;
    float Balance;
public:
    void assignvalues(string Name,int Ano,string Type,float Balance);
    void deposit(float Amount);
    void withdraw(float Amount);
    void display(){cout<<"\nName: "<<Name<<"\nBalance: "<<Balance<<endl;}
    
};
int main(){
    int choice;BankAccount b1;
    string Name,Type;int Ano;float Balance,flag=0;
    
    while(1){     
        cout<< "\nOptions:\n1 - Add Account\n2 - Deposit\n3 - Withdraw\n4 - Display\n5 - Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\nEnter Name:";cin>>Name;cin.ignore();
                cout<<"Enter Account Number:";cin>>Ano;
                cout<<"Enter Account Type(Saving/Current/etc):";cin>>Type;cin.ignore();
                cout<<"Enter Balance:";cin>>Balance;
                b1.assignvalues(Name,Ano,Type,Balance);
                break;
            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>Balance;
                b1.deposit(Balance);
                break;
            case 3:
                cout<<"Enter amount to withdraw: ";
                cin>>Balance;
                b1.withdraw(Balance);
                break;
            case 4:
                b1.display();
                break;
            case 5:
                flag=1;
                break;
            default:
                cout<<"\nInvalid choice, Please try again."<<endl;
            }
            if(flag)break;        
    }
}
void BankAccount::assignvalues(string Name, int Ano, string Type, float Balance) {
    this->Name = Name;
    this->Ano = Ano;
    this->Type = Type;
    this->Balance = Balance;
}
void BankAccount::withdraw(float Amount) {
    if (Amount > Balance) {
            cout << "\nInsufficient balance, Withdrawal failed.\n" << endl;
    } else {
        Balance -= Amount;
        cout << "\nWithdrawal successful. Current Balance: " << Balance << endl;
    }
}
void BankAccount::deposit(float Amount) {
    if(Amount <= 0) {
        cout << "\n....Enter a Valid amount to deposit...." << endl;
        return;
    }
    Balance += Amount;
    cout << "\nDeposit successful. Current Balance: " << Balance << endl;
}