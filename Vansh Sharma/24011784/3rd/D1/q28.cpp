#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    list<int> l = {1,2,3};
    l.push_back(4);

    vector<int> v = {10,20,30};
    v.push_back(40);

    map<int, string> m;
    m[1] = "A"; m[2] = "B";

    for(int x : l) cout << x << " "; cout << endl;
    for(int x : v) cout << x << " "; cout << endl;
    for(auto p : m) cout << p.first << ":" << p.second << " "; cout << endl;
}
