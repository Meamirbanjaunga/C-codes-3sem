#include <iostream>
using namespace std;
class Time{
    int hour,minute,second;
public:
    Time(){
        hour=0;minute=0;second=0; }
    Time(int h, int m, int s){
        hour=h;minute=m;second=s; }
    void add(Time t1,Time t2);
    void display();
};
int main(){
    Time t1(2,10,20),t2(3,20,30),t3;
    t3.add(t1,t2);
    t3.display();
    return 0;
}
void Time::add(Time t1,Time t2){
    second = t1.second + t2.second;
    minute = t1.minute + t2.minute + second / 60;
    hour = t1.hour + t2.hour +minute / 60;
}
void Time::display() {
    cout << hour << " : " << minute << " : " << second << endl;
}