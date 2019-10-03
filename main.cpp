#include <iostream>
#include "TestDemo.h"
using namespace std;
int main()
{
    cout<<"Hello, World!"<< endl;
    int values[5];
    input(values, sizeof(values)/ sizeof(int));
    print( values,5);
    print( values,5);

    return 0;
}
