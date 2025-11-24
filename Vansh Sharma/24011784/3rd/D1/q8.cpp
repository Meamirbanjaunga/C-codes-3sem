#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int scores[5];
public:
    void input();
    int calculateTotalScore(); 
};
int main(){
    int n,anna,count=0;cin>>n;Student *arr;
    arr=new Student[n];
    for(int i=0;i<n;i++){
        arr[i].input();
    }
    anna=arr[0].calculateTotalScore();
    for(int i=0;i<n;i++){
        if(arr[i].calculateTotalScore()>anna)count++;
    }
    cout<<count<<endl;
    return 0;
    delete[] arr;
    arr=nullptr;
}
void Student::input() {
    for (int i = 0; i < 5; i++) {
        cin >> scores[i];
    }
}
int Student::calculateTotalScore() {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += scores[i];
    }
    return total;
}