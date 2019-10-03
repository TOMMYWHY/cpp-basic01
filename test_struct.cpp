//
// Created by Tommy on 2019-10-03.
//

#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
};

int main(){
//    cout << "caonima C++" << endl;
struct Student s = { "tommy", 18};
struct Student * p = &s;

cout << p->name << endl;

    return 0;
}