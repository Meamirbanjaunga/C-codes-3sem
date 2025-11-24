#include <iostream>
#include <string>
using namespace std;
class Invoice
{   private:
        string partNumber;
        string partDescription;
        int quantity;
        double price;
    public:
    Invoice(string partNumber, string partDescription, int quantity, double price) {
        this->partNumber = partNumber;
        this->partDescription = partDescription;
        this->quantity = quantity;
        this->price = price;
    }
    void setPartNumber(string partNumber);
    void setPartDescription(string partDescription);
    void setQuantity(int quantity);
    void setPrice(double price);
    string getPartNumber();
    string getPartDescription();
    int getQuantity();
    double getPrice();
    double getInvoiceAmount();   
};
int main(){
    string partNumber, partDescription;int quantity;double price;
    cout<<"Enter Part Number: ";cin>>partNumber;cin.ignore();
    cout<<"Enter Part Description: ";getline(cin,partDescription);
    cout<<"Enter Quantity: ";cin>>quantity;
    cout<<"Enter Price: ";cin>>price;
    Invoice i(partNumber,partDescription,quantity,price);
    cout<<"\n\n\n\n";
    cout<<"Part Number: "<<i.getPartNumber()<<endl;
    cout<<"Part Description: "<<i.getPartDescription()<<endl;
    cout<<"Quantity: "<<i.getQuantity()<<endl;
    cout<<"Price: "<<i.getPrice()<<endl;
    cout<<"Invoice Amount: "<<i.getInvoiceAmount()<<endl;

    return 0;
    
}

void Invoice::setPartNumber(string partNumber) {
    this->partNumber = partNumber;
}
void Invoice::setPartDescription(string partDescription) {
    this->partDescription = partDescription;
}
void Invoice::setQuantity(int quantity) {
    if (quantity < 0) {
        this->quantity = 0;
    } else {
        this->quantity = quantity;
    }
}
void Invoice::setPrice(double price) {
    if (price < 0) {
        this->price = 0;
    } else {
        this->price = price;
    }
}
string Invoice::getPartNumber() {
    return partNumber;
}
string Invoice::getPartDescription() {
    return partDescription;
}
int Invoice::getQuantity() {
    return quantity;
}
double Invoice::getPrice() {
    return price;
}
double Invoice::getInvoiceAmount() {
    return quantity * price;
}