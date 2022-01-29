// https://leetcode.com/problems/reverse-integer
#include <iostream>
using namespace std;
int main(){
    int number = 0;
    cin >> number;
    int reversedNumber = 0;

    while (number!=0){
        int rem = number%10;
        // if(reversedNumber>INT_MAX/10 || reversedNumber<INT_MIN/10){
        //     return 0;
        // }
        reversedNumber = (reversedNumber*10) + rem;
        number = number/10;
    }

    cout << reversedNumber << endl;

    return 0;
}