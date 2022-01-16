#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int bin = 100110;
    int decimal = 0;
    int index = 0;
    while(bin!=0){
        int rem = bin%10;
        decimal = (rem*pow(2, index)) + decimal;
        bin = bin/10;
        index++;
    }
    cout << decimal << endl;

    return 0;
}