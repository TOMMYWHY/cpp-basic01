#include <iostream>
using namespace std;

int main (){

    int a =10;
    int b =100;
    const int * p = &a; // 常量指针 // const 标记 *,则 *p 固定。

//    *p = 11; // error : read only
//    p = &b; //指向 b
    cout << "pointer : p => " <<p << endl;
    cout << "pointer : * p => " <<*p << endl;


    int * const pp = &a; // 指针常量 // const 标记 pp，则 pp 固定。// reference
    *pp = b;
//    pp =&b; // error:
    cout << "pointer : pp => " <<pp << endl;
    cout << "pointer : * pp => " <<*pp << endl;

    cout << "pointer : p => " <<p << endl;
    cout << "pointer : * p => " <<*p << endl;

    const int * const ppp = &a;
    cout << "pointer : ppp => " <<ppp << endl;
    cout << "pointer : * ppp => " <<*ppp << endl;


    return 0;
}