
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int num = 421;
    int binary = 0;
    int index = 0;
   
    while (num!=0){
        int remainder = num%2;
        binary = (remainder*pow(10, index)) + binary;
        num = num/2;
        index++;
    }
        
    cout<<binary<<endl;

    return 0;
}