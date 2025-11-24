#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;int i;int freq[256]={0};
    cout<< "Enter the string: ";getline(cin,str);
    for(i=0;i<str.length();i++){
        if(str[i]!=' '){
            freq[str[i]]++;
        }
    }
    for(i=0;i<str.length();i++){
        if(str[i]!=' ' && freq[str[i]]==1){
            cout<<str[i]<<' ';
        }
    }
    return 0;
}
