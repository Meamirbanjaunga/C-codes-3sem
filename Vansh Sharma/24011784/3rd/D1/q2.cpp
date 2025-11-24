#include <iostream>
#include <string>
using namespace std;
int main(){
    char target;string str,str_;int i;
    cout<< "Enter the string: ";getline(cin,str);
    cout<<"Enter the character to remove: ";cin>>target;
    for(i=0;i<str.length();i++){
        if(str[i]!=target){
            str_+=str[i];
            
        }
    }
    cout<<str_;
    return 0;
}
