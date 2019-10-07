#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int i;
    char ch;
    cout << "enter numbers and any space : ...";

    while(cin>>i){
        sum+=i;
        while (cin.peek() == ' '){
            cin.get();
        }
        if(cin.peek() == '\n'){
            break;
        }
    }
    /*while (scanf("%d", &i) == 1) {
        sum += i;
        while ((ch=getchar())==' ') {
            ;
        }
        if(ch == '\n'){
            break;
        }
        ungetc(ch,stdin);
    }*/

    cout << "sum : " << sum <<endl;
    return 0;
}