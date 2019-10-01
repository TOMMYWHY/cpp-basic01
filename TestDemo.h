//
// Created by Tommy on 2019-10-01.
//


#ifndef BASIC01_TESTDEMO_H
#define BASIC01_TESTDEMO_H

#include <iostream>
using namespace std;
void input(int [],int );
void print(int [], int);

void input(int values[], int len){
    if(len>5){
        std::cout << "array length out of range~!" <<std::endl;
        return;
    }
    string valueNames [] ={"a","b","c","d","e"};
    for (int i = 0; i < len; i++) {
        cout << valueNames[i]<<":" ;
        cin >> values[i];
    }
}
void print(int values[], int len){
    string valueNames [] ={"a","b","c","d","e"};
    for (int i = 0; i < len; i++) {
        cout << valueNames[i] << ": " <<values[i]<<endl;
    }
}

#endif //BASIC01_TESTDEMO_H
