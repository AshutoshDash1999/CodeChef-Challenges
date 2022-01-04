// Problem Link: https://www.codechef.com/CCSTART2/problems/SECLAR

#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1>num2 && num2>num3 && num1>num3){ //321
        cout << num2;
    } else if (num1<num2 && num2<num3 && num1<num3){//123
        cout << num2;
    } else if (num1>num2 && num1<num3 && num1<num3){//213
        cout << num1;
    } else if (num1<num2 && num2>num3 && num1>num3){//231
        cout << num1;
    } else if (num1<num2 && num2>num3 && num1<num3){//132
        cout << num3;
    } else if (num1>num2 && num2<num3 && num1>num3){ //312
        cout << num3;
    }

    return 0;
}