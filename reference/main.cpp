#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = 100;
    int & ref = a; // int * const p_ref = &a;
    ref = b; // *p_ref = b
    cout << "&a => " << &a<<endl;
    cout << "&b => " << &b<<endl;

    cout << "ref => " << ref<<endl;
    cout << "&ref => " << &ref<<endl;



    return 0;
}