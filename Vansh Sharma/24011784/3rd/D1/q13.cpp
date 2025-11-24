#include <iostream>
using namespace std;
class SavingsAccount{
    float savingsBalance;
public:
    static float annualInterestRate;
    SavingsAccount(float initialBalance){
        savingsBalance=initialBalance;
    }
    SavingsAccount(){}
    float getBalance();
    void calculateMonthlyInterest();
    static void modifyInterestRate(float newRate){
        annualInterestRate=newRate;
    }  
};
int main(){
    float newRate;
    SavingsAccount saver1(2000),saver2(3000);
    SavingsAccount::annualInterestRate=4;
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout<<"When Monthly Interest rate= 4%"<<endl;
    cout<<"Saver 1 Balance: "<<saver1.getBalance()<<endl;
    cout<<"Saver 2 Balance: "<<saver2.getBalance()<<endl;
    cout<<"\nWhen Monthly Interest rate= 5%"<<endl;
    SavingsAccount::annualInterestRate=5;
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout<<"Saver 1 Balance: "<<saver1.getBalance()<<endl;
    cout<<"Saver 2 Balance: "<<saver2.getBalance()<<endl;
    return 0;
}
float SavingsAccount::annualInterestRate=0;
void SavingsAccount::calculateMonthlyInterest() {
    float monthlyInterest = (savingsBalance*(annualInterestRate/100))/12;
    savingsBalance += monthlyInterest;
}
float SavingsAccount::getBalance() {
    return savingsBalance;
}

