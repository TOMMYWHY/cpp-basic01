
#include <iostream>
using namespace std;

int add(int num1, int num2){
    return  num1 + num2;
}

int addArr(int * arr, int len){
    int sum = 0;
    for(int i = 0; i<len;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int len =	sizeof(arr)/sizeof(int);
//	cout<< add(1,2)<<endl;
    cout<< addArr(arr,len)<<endl;
    return 0;
}
